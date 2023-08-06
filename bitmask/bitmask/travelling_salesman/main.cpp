#include <bits/stdc++.h>

int shortest_path(std::vector<std::vector<int>> &dist, int set_of_cities,int city,int n,std::vector<std::vector<int>> &dp)
{
    if(set_of_cities==(1<<n)-1) return dist[city][0];
    
    if(dp[set_of_cities][city]!=-1) return dp[set_of_cities][city];
    int ans=INT_MAX;
    for(int choice{0};choice<n;choice++)
    {
        if((set_of_cities&(1<<choice))==0)
        {
            int sub_prob=dist[city][choice]+shortest_path(dist,set_of_cities|(1<<choice),choice,n,dp);
            ans=std::min(ans,sub_prob);
        }
        
    }
    dp[set_of_cities][city]=ans;
    return ans;
}

int main()
{
    std::vector<std::vector<int>> dist{
        {0,20,42},
        {20,0,30},
        {42,30,0}
    };
    std::vector<std::vector<int>> dp(1<<3,std::vector<int>(3,-1) );
    std::cout<<shortest_path(dist,1,0,3,dp)<<'\n';
}