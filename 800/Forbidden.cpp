#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        vector<bool>dp(n+1,false);
        vector<int>track;
        dp[0] = true;
        for(int i = 1;i <n+1;i++)
        {
            bool temp = false;
            for(int j = 1;j<=k;j++)
            {
               if(j==x) continue;
               if(i-k>=0 && dp[i-k])
               {
                  temp = true;
                  track.push_back(j);
                  break;
               }
            }
            dp[i] = temp;
        }
        if(dp[n]==false) cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
            cout<<track.size()<<endl;
            for(int i=0;i<track.size();i++) cout<<track[i]<<" ";
            cout<<endl;
        }
    }
}