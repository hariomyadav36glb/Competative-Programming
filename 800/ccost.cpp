#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == k)
            {
               ans = 1;
                break;
            }
        }
        if(ans==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}