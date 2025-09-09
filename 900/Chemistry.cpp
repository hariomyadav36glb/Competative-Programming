#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n , k;
        cin>>n>>k;

        string s;
        cin>>s;

        vector<int>track(26,0);

        for(char c : s)
        {
            track[c - 'a'] ++;
        }
        int oddcnt = 0;
        for(int i = 0 ;i < 26 ;i++)
        {
            if(track[i]%2 == 1) oddcnt ++;
        }
        
        if(oddcnt-k <= 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}