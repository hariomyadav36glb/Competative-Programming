#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        if(n%2 == 0)
        {
            int xorr = 0;
            for(int &i:arr) xorr ^= i;
            
            if(xorr == 0) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else{
              int xorr = 0;
              for(int &i:arr) xorr ^= i;
              cout<<xorr<<endl;
        }

    }
}