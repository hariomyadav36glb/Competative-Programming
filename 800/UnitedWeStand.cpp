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

        sort(arr.begin(),arr.end());
        if(arr[0]==arr[n-1]) cout<<-1<<endl;
        else{
        vector<int>b,c;
        int j = n-1;
        while(arr[j]==arr[j-1]){
           c.push_back(arr[j]);
           j--;
        }
        c.push_back(arr[j]);
        for(int i=0;i<j;i++)
        {
            b.push_back(arr[i]);
        }
        cout<<b.size()<<" ";
        cout<<c.size()<<endl;
        for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
        cout<<endl;
        for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
        cout<<endl;
    }
    }
}