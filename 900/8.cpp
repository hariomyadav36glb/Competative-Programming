#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin>>t;
    while(t--)
    {
        int n , k ; cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0 ; i <n ; i++) cin>>arr[i];
        sort(arr.begin() , arr.end());
        int ans = INT_MIN;
        int cnt = 0 ;
        for(int i = 0; i < n-1 ; i++)
        {
            if(arr[i+1] - arr[i] <= k )
            {
                cnt++;
            }
            else
            {
                ans = max(ans , cnt);
                cnt = 0 ;
            }
        }
        ans = max(ans , cnt);
        cout<<n - (ans+1)<<endl;
    }
}