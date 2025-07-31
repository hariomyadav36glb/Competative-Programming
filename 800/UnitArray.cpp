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

        int pr  = 1;
        int sum  = 0;
        for(auto i:arr)
        {
            pr*=i;
            sum+=i;
        }

        int cnt  = 0;
        if(pr==1 && sum>=0) cout<<cnt<<endl;
        else{
        while(true)
        {
               sum += 2;
               pr *= -1;
               cnt ++;
               if(pr==1 && sum>=0) break; 
        }
        cout<<cnt<<endl;
    }
    }
}