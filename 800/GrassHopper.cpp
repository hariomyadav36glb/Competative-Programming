#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        if(x%k !=0 )
        {
            cout<<1<<endl<<x<<endl;
        }
        else{
            cout<<2<<endl;
           for(int i=x;i>=0;i--)
           {
              if(i%k != 0) 
              {
                cout<<i<<" "<<x-i<<endl;
                break;
              }
           }
        }
    }
}