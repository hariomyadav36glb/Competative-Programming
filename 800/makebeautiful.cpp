#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        // reorder
        vector<int>nums(n);
        int x = 0, y = 1;
        int i = 0 ,j = n-1;
        while(i<j)
        {
          nums[x] = arr[i];
          nums[y] = arr[j];
          i++;j--;
          x += 2;
          y += 2;
        }
        if(n%2) nums[x] = arr[i];
        bool flag = 1;
        int psum = 0;
        for(int &i : nums)
        {
            if(i==psum) flag = 0;
            psum += i;
        }
        if(flag) 
        {
            cout<<"YES"<<endl;
            for(int &i:nums) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}