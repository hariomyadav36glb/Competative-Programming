#include<bits/stdc++.h>
using namespace std;

// x+1,y+1   pahla move
// x-1 , y  doosra move

int fun(long sx , long sy , long dx , long dy)
{
    int ans = 0;
    //   agr destination source ke niche ho to possilbe nhi hai ans
    if(sy > dy) return -1;
    
    // pahla move chalo taki dono ek line ma aa jaye

    ans += (dy-sy) ;
     
    sx += (dy-sy);
    // ab check kro ki destination left me hai ki right me

    if(dx > sx) return -1;
    else ans += (sx - dx) ;

    return ans;
}
 int main()
{
    int t ; cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
      
        cout<<fun(a,b,c,d)<<endl;
        
    }
}