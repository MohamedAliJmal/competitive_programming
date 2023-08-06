#include <bits/stdc++.h>


int unique_number(std::vector<int> vect)
{
    int unique{0};
    for(auto i:vect)
    {
        unique=unique^i;
    }
    return unique;
}
        
int main()
{
    int number,n;
    std::vector<int> vect;
    do{
    std::cin>>n;
    }while(!(n&1));
    while(n--)
    {
        std::cin>>number;
        vect.push_back(number);
    }

    std::cout<<"unique number= "<<unique_number(vect)<<"\n";

}