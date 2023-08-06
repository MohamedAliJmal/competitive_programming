#include <bits/stdc++.h>

int main()
{
    short n;
    std::cin>>n;
    short rot[n];
    short res;
    for(int i{0};i<n;i++) std::cin>>rot[i];
    for(int i{0};i<((1<<n)-1);i++)
    {
        res=0;
        for(auto j{0};j<n;j++)
        {
            res+=((1<<j)&i)?rot[j]:-rot[j];
        }
        if(res%360==0) 
        {
            std::cout<<"YES\n";
            return 0;
        }
    }
    std::cout<<"NO\n";
    return 0;
}