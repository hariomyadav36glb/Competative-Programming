#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
   
    while(t--)
    {
          int a ,b,c;
           cin>>a>>b>>c;
        int anna = 0;
        if(c%2==0) anna = c/2;
        else anna = c/2 +1;
        int katti = c - anna;
        if(anna + a> katti + b) cout<<"first"<<endl;
        else cout<<"second"<<endl;
    }
}