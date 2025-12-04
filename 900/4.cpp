#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        long long a,b,n;cin>>a>>b>>n;

        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin() ,arr.end());

        long long ans = b;
        for(int j = 0;j <n;j++)
        {
            ans += min(arr[j] , a - 1);
        }
        cout<<ans<<endl;

    }
}