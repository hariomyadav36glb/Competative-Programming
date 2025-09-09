#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> coordinates = {{1,1},{1,-1},{-1,-1},{-1,1}};
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;

        int xk , yk;cin>>xk>>yk;

        int xq , yq ; cin>>xq>>yq;

        set<pair<int,int>>kap , qap;

        for(int i = 0 ;i < 4;i++)
        {
            kap.insert({xk +coordinates[i][0]*a , yk + coordinates[i][1]*b});
            kap.insert({xk +coordinates[i][0]*b , yk + coordinates[i][1]*a});

            qap.insert({xq +coordinates[i][0]*a , yq + coordinates[i][1]*b});
            qap.insert({xq +coordinates[i][0]*b , yq + coordinates[i][1]*a});
        }
        
        int ans = 0;

        for(auto position  : kap)
        {
            if(qap.find(position) != qap.end()) ans++;
        }
        cout<<ans<<endl;

    }
}