#include<bits/stdc++.h>
using namespace std;
bool isValid(int x,int y,int n,int m)
{
    if(x<1 || y<1 || x>n || y>m) return false;
    else return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
       
        vector<vector<int>>dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int cnt1 = 0;
        for(auto it:dir)
        {
            if(isValid(it[0]+x1,it[1]+y1,n,m)) cnt1++;
        }
         int cnt2 = 0;
        for(auto it:dir)
        {
            if(isValid(it[0]+x2,it[1]+y2,n,m)) cnt2++;
        }
        cout<<min(cnt1,cnt2)<<endl;
    }
}