#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>&arr)
{
    int   n = arr.size();
     int cnt2 = 0;
    for(int &i: arr)  if(i==2) cnt2++;

    int precnt = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(arr[i]==2) precnt++;
        if(precnt == (cnt2 - precnt)) return i+1;
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        cout<<fun(arr)<<endl;

    }
}