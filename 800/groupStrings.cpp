#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
      int n = s.size();
      string temp = "";
    for(int i=0;i<n;i++)
    { 
        if(abs(s[i]-s[i+1])==1) temp+=s[i];
        else {
            temp+=s[i];
            cout<<temp<<endl;
             temp="";
        }
    }
}