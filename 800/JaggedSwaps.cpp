#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1]<v[i]) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
       int x = 10;
       while(x--){
       for(int i=1;i<v.size()-1;i++)
       {
         if(v[i]>v[i+1] && v[i]>v[i-1])
         {
            swap(v[i],v[i+1]);
         }
       }
    }
      if(isSorted(v)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}