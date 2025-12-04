#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>&v1 , vector<int>&v2)
{
    vector<int>merged;
    
    int  i = 0 ;
    int  j  = 0;

    while(i < v1.size() && j < v2.size())
    {
        if(v1[i]  <= v2[j]) 
        {
            merged.push_back(v1[i]);
            i++;
        }
        if(v2[j] < v1[i])
        {
            merged.push_back(v2[j]);
            j++;
        }
    }

    while( i < v1.size()) merged.push_back(v1[i++]);
    while(j < v2.size()) merged.push_back(v2[j++]);
    return merged ;

}

vector<int> mergeSort(vector<int>&arr , int st , int end)
{
     int mid = (st + end) / 2;
    
     if(st  == end) return {arr[st]};

     vector<int>part1 = mergeSort(arr , st , mid);
     vector<int>part2 = mergeSort(arr , mid+1 , end);

     vector<int> merged = merge(part1 , part2);

     return merged;
}


int main()
{
    int n ; 
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    } 
  cout<<"Before sorting : ";
  for(int  i : arr)  {
    cout<<i<<" ";
  }
     cout<<endl;
    vector<int>ans = mergeSort(arr,0,n-1); 
    cout<<"After sorting : ";
    for(int  i  : ans)
    {
        cout<<i<<" ";
    } 

}