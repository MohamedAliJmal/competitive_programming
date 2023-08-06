#include <bits/stdc++.h>

short which_bit_is_set(int &x)
{
    short pos=0;
    while(!((1<<pos)&x)) pos++;
    return pos;
}

std::pair<int,int> unique_numbers(std::vector<int> &vect)
{
    std::pair<int,int> res;
    std::vector<int> B;
    
    int mask{0};
    for(auto i:vect) mask=mask^i;
    int set_bit=which_bit_is_set(mask);
    for(auto i:vect)
    {
        if((1<<set_bit)&i) B.push_back(i);
    }
    for(auto i:B) res.first=res.first^i;
    res.second=res.first^mask;
    return res;

}
int main()
{
    std::vector<int> vect ={1,2,3,4,5,3,2,1};
    std::pair<int,int> res=unique_numbers(vect);
    std::cout<<res.first<<" "<<res.second<<"\n";

}