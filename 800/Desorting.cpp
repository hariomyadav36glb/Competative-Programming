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
        
        bool isSorted = true;
        int minDiff = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
           if(arr[i+1]<arr[i]){
            isSorted = false;
            break;
              }
              minDiff = min(minDiff,arr[i+1]-arr[i]);
           } 
      
     if(!isSorted) cout<<0<<endl;
     else{
        cout<<minDiff/2 +1<<endl;
     }
}
}