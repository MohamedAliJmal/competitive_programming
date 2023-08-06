#include <bits/stdc++.h>


void add( std::string &n1, std::string &n2)
{
    std::list<int> res;
    short carry{0};
    if(n1.length()>n2.length())
    {
        n1.swap(n2);
    }
    for(int i{n1.length()-1};i>=0;i--)
    {
        res.push_front((n1.at(i)-48+n2.at(i)-48+carry)%10);
        carry=(n1.at(i)-48+n2.at(i)-48+carry)/10;
        
    }
    for(int i{n2.length()-n1.length()-1};i>=0;i--)
    {
        res.push_front((n2.at(i)-48+carry)%10);
        carry=(n2.at(i)-48+carry)/10;
        
    }
    if(carry) res.push_front(carry);
    for(auto i:res) std::cout<<i;
    std::cout<<'\n';


}

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string n1,n2;
    std::cin>>n1>>n2;
    add(n1,n2);
}