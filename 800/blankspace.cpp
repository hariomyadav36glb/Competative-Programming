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
        int maxcnt = 0;
        int temp = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0) temp ++ ;
            else if(arr[i]==1) 
            {
                maxcnt = max(maxcnt  , temp);
                temp = 0;
            }
        }
        maxcnt = max(maxcnt , temp);
        cout<<maxcnt<<endl;
    }
}