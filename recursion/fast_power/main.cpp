#include <bits/stdc++.h>

using namespace std;

int fast_power(int a,int n)
{
    if(n==0)
        return 1;
    int subpower=fast_power(a,n/2);
    subpower=subpower*subpower;
    if(n&1)
        return a*subpower;
    return subpower;
}

int main()
{
    int a,n;
    cin>>a>>n;

    cout<<fast_power(a,n)<<'\n';
}