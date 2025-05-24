#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int ans = INT_MAX;
     for(int i=0;i<n;i++) ans = min (ans,abs(v[i]));
     cout<<ans<<endl;
}