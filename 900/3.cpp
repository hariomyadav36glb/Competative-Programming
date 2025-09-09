#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n , k , x;
        cin>>n>>k>>x;

        long long mini = k * (k+1)/2;
        long long first = n - k ;
        long long fs = first * (first + 1)/2;
        long long maxi = n * (n+1)/2 - fs;

        if(x < mini ||  x > maxi) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}