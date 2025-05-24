#include<bits/stdc++.h>
using namespace std;

 
    bool fs(int i,int j)
    {
        if(i==0 || j==0 || i==9 || j==9) return true;
        else return false;
    }
     
    bool ss(int i,int j)
    {
        if(i==1 || j==1 || i==8 || j==8) return true;
        else return false;
    }
     
    bool ts(int i,int j)
    {
        if(i==2 || j==2 || i==7 || j==7) return true;
        else return false;
    }
     
    bool frs(int i,int j)
    {
        if(i==3 || j==3 || i==6 || j==6) return true;
        else return false;
    }
     
    bool fis(int i,int j)
    {
        if(i==4 || j==4 || i==5 || j==5) return true;
        else return false;
    }

int main()
{
    int  t; cin>>t;
  while(t--){
    vector<vector<char>>board(10,vector<char>(10));

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>board[i][j];
        }
    }
    int score = 0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(board[i][j]=='X')
            {
                
              if(fs(i,j)) score+=1;
              else if(ss(i,j)) score+=2;
              else if(ts(i,j)) score+=3;
              else if(frs(i,j)) score+=4;
              else score+= 5;


            }
        }
    }
    cout<<score<<endl;
}
}
