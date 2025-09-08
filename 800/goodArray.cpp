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
        int current_parity = arr[0]%2;
        int cnt = 0;
        for(int i=1;i<n;i++)
        {
            if(current_parity == arr[i]%2)
            {
                cnt++;
            }
            else{
                 current_parity = arr[i]%2;
            }
        }
        cout<<cnt<<endl;
    }
}