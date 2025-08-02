#include<bits/stdc++.h>
using namespace std;

int fun(string &s)
{
    int n = s.size();
    if(n==1) return 1;
        int cnt = 0;
        int i = 0 , j = n - 1;
        while(i < j)
        {
            if(s[i] == s[j]) break;
            else 
            {
                cnt ++ ;
                i++;
                j--;
            }
        }
    return n - 2*cnt;
}

int main()
{
    int t ; cin>>t;
    while(t--)
    {
        int n ; cin>>n;

        string s;
        cin>>s;
        
        cout<<fun(s)<<endl;

    }
}