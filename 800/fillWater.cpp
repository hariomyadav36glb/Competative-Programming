#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin.ignore();
        cin>>s;
        int comp = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(comp>=3){
                    ans = 2;
                    comp=0;
                    break;
                }
                else 
                {
                    ans = ans + comp;
                    comp = 0;
                }
            }
            else{
            comp++;
            }
        }
        if(comp>=3)
        {
            cout<<2<<endl; continue;
        }
        ans+=comp;
        cout<<ans<<endl;
        }
    }
