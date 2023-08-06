#include <bits/stdc++.h>

void all_subset(std::string str)
{
    for(auto i{0};i<(1<<str.length());i++)
    {
        for(auto j{0};j<str.length();j++)
        {
            if((1<<j)&i) std::cout<<str.at(j);
        }
        std::cout<<'\n';
    }
}

int main()
{
    std::string str;
    std::cin>>str;
    all_subset(str);
}