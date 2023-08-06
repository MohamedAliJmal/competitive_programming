#include <bits/stdc++.h>


void multiply(std::vector<int> &res,int n,int &size)
{
    int carry=0;
    for(int i=0;i<size;i++)
    {
        int product =res[i]*n+carry;
        res.at(i)=product%10;
        carry=product/10;
    }
    while(carry)
    {
        res.at(size)=carry%10;
        carry/=10;
        size++;
    }
}

void fact(int n)
{
    std::vector<int> res(10000000,0);
    res[0]=1;
    int size{1};
    for(int i=2;i<=n;i++)
    {
        multiply(res,i,size);
    }
    for(int i=size-1;i>=0;i--)
    {
        std::cout<<res.at(i);
    }
    std::cout<<'\n'<<"size= "<<size<<'\n';
}
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n;
    std::cin>>n;
    fact(n);
    return 0;
}