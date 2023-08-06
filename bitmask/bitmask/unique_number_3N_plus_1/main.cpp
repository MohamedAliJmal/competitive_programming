#include <bits/stdc++.h>

int unique_number(std::vector<int> &vect)
{
    int res{0};
    short mask{0};
    for(short i{0};i<31;i++)
    {
        for(auto number:vect)
        {
            mask+=((1<<i)&number)?1:0;
        }
        res=res|((mask%3)<<i);
        mask=0;

    }
    return res;
}

int main()
{
    std::vector<int> vect={5,2,5,3,5,2,2};
    std::cout<<unique_number(vect)<<"\n";
}