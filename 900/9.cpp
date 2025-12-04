#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t ;cin>>t;
    while(t--)
    {
        int n ; cin>>n;
        string str;
        cin>>str;
        
        int ans = INT_MIN;
        int cnt = 1;
        for(int i = 0 ;i < n-1 ; i++)
        {
            if(str[i] == str[i+1]) cnt++;
            else
            {
                ans = max(ans , cnt);
                cnt  = 1;
            }
        }
        ans = max(ans , cnt);
        cout<<ans+1<<endl;
    }
}