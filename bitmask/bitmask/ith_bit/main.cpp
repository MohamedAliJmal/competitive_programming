#include <bits/stdc++.h>

int get_ith_bit(int i,int n)
{
    int mask=1<<i;
    return (n&mask)?1:0;
}

int clear_ith_bit(int i,int n)
{
    int mask=~(1<<i);
    return (n&mask);

}

int set_ith_bit(int i,int n)
{
    int mask=1<<i;
    return n|mask;
}

int update_ith_bit(int i,int n,int v)
{
    int mask=v<<i;
    n=clear_ith_bit(i,n);
    return n|mask;

}

int clear_last_ith_bits(int i, int n)
{
    int mask=-1<<i;
    return n&mask;
}

int clear_bits_in_range(int n ,int i,int j)
{
    int a=(~0)<<j+1;
    int b=(1<<i)-1;
    int mask=a|b;
    return n&mask;
}

int replace_bits(int n,int i ,int j,int rep)
{
    clear_bits_in_range(n,i,j);
    int mask=rep<<i;
    return n|i;
}

void pow_of_2(int n)
{
    if(n&(n-1))
    {
        std::cout<<"not pow of 2\n";
    }else{
        std::cout<<"pow of 2\n";
    }
}

int count_bits(int n)
{
    int count{0};
    int last_bit;
    while(n>0)
    {
        last_bit=1&n;
        count+=last_bit;
        n=n>>1;
    }
    return count;
}

int count_bits_hack(int n)
{
    int count{0};
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n,i;
    std::cin>>n>>i;
    std::cout<<get_ith_bit(i,n)<<'\n';
    std::cout<<clear_ith_bit(i,n)<<'\n';
    std::cout<<set_ith_bit(i,n)<<'\n';
    std::cout<<update_ith_bit(i,n,0)<<'\n';
    std::cout<<clear_bits_in_range(n,0,2);
    std::cout<<'\n'<<replace_bits(n,0,2,111)<<'\n';
    pow_of_2(n);
    std::cout<<count_bits(n)<<"\n";
    std::cout<<count_bits_hack(n)<<'\n';
}

