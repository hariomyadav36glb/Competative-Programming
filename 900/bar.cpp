#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // string line ;
    // getline(cin , line);

    // stringstream ss(line);

    // vector<int>arr;
    // int num;
    // while(ss >> num)
    // {
    //      arr.push_back(num);
    // }
    // for(int i  : arr) cout<<i<<" ";


    string line  ; 
    getline(cin , line);

    stringstream ss (line);

    string str ; 
    vector<int>arr;

     while (getline(ss, str, ',')) {   // ',' delimiter use kar rahe
        arr.push_back(stoi(str));    // string → int
    }
   
    // for(int i : arr) cout<<i<<" ";
    // cout<<endl;
    for(int  i  : arr)
    {
        while(i--)
        {
            if(i==1) cout<<"*";
            else cout<<"*"<<endl;
        }
    }

}