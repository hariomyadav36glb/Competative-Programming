#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int val ;
     vector<Node*>children;

     Node(){}
     Node(int _val){
        val = _val;
     }
     Node(int _val , vector<Node*>_children)
     {
        val = _val ;
        children = _children;
     }

};

Node* create(vector<int>&arr)
{
    Node* head = NULL;
    int  i = 0;
    stack<Node*>st;
    while(i  < arr.size())
    {
        if(arr[i] == -1) st.pop();
        else{
              Node*  temp  =  new Node(arr[i]);
              if(st.empty()) 
              {
                head = temp;
                st.push(temp);
              }
              else{
                st.top()->children.push_back(temp);
                st.push(temp);
              }
        }
        i++;
    }
    return head;
}

void preorder(Node* head)
{
    cout<<head->val<<" ";
    for(Node* it : head->children)
    {
         preorder(it);
    }
}

int cntnode(Node* root)
{
    int cnt = 0;
    for(Node* it : root->children)
    {
        cnt += cntnode(it);
    }
    cnt += 1;
    return cnt;
}

int maxvalue(Node* root)
{
    int maxi  =  INT_MIN;
    for(auto it : root->children)
    {
        maxi = max(maxi , maxvalue(it));
    }
    return max(root->val , maxi);
}

int height(Node* root)
{
    int h  = 0 ;
    for(auto it : root->children)
    {
        h = max(h  , height(it));
    }
    return h + 1;
}

void mirror(Node* root)
{
   for(auto it  : root->children)
   {
     mirror(it);
   }

   reverse(root->children.begin() , root->children.end());
}


int main()
{
    int n ; 
    cin>>n;

    vector<int>arr(n);
    for(int i = 0 ;i < n ; i++)
    {
        cin>>arr[i];
    }
    Node* head = create(arr);
    cout<<"Preorder : ";
    preorder(head);
    cout<<endl<<"Total Nodes : ";
    cout<<cntnode(head);
    cout<<endl<<"Maximum value in tree : ";
    cout<<maxvalue(head);
    cout<<endl<<"Height of a tree : ";
    cout<<height(head);
    cout<<endl<<"Mirror image of tree : ";
    // mirror(head);
    preorder(head);
}