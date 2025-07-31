#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1) cout<<a[0]<<endl;
       else{
        for(int i=0 ;i <n ; i++)
        {
          b[i] = n+1 - a[i] ;
        }
       for(int i : b) cout<<i<<" ";
       cout<<endl;
      }
    }
}