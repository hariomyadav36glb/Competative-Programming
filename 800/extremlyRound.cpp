#include<bits/stdc++.h>
using namespace std;

bool check(long long i)
{
    long long cntdigit = 0;
    long long cntzero = 0;
    while(i)
    {
        if(i % 10) cntzero ++;
        cntdigit ++;
        i /= 10;
    }

    return cntdigit == cntzero + 1;
}

vector<int> precomp(){

vector<int>round_numbers ;
for(int i = 1 ; i <= 999999 ;i++)
{
      if(check(i)) round_numbers.push_back(i);
}
return round_numbers;
}
int main()
{
    int t ; cin>>t;

    while(t--)
    {
        long long n ; cin>>n;
        
        vector<int>round_num = precomp();
        long long ans = 0 ;
        for(int i : round_num)
        {
            if(i <= n) ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}