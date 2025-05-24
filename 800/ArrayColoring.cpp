#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int oddCount = 0;
        int evenCount = 0;
        for(auto i:arr)
        {
            if(i%2==0) evenCount++;
            else oddCount++;
        }
        if(oddCount%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}