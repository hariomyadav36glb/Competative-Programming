#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
     int data ;
     Node* next;

     Node(int data1)
     {
        data = data1;
     }
     Node(int data1 , Node* ptr)
     {
        data = data1 ;
        next = ptr;
     }
} ;
Node* create(int n)
{
   if(n==0) return NULL;
   Node* head = NULL;
   Node* tail ;
   for(int i = 0;i <n ;i++)
   {
      int val ;
      cin>>val;

      if(head == NULL)
      {
         head = new Node(val);
         tail = head ;
      }
      else{
        tail->next = new Node(val);
        tail = tail->next;
      }
   }
   tail->next = NULL;
   return head ;

}


void print(Node* head)
{
    Node* temp =  head;
    while(temp->next)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data;
}

vector<Node*> rotatell(Node* hosll , Node* tosll , int  k)
{
   Node* temp = hosll;
   int cnt = 0;
   while(temp)
   {
      cnt++;
      temp = temp->next;
   }

   k = k%cnt ;
   k = cnt - k;

   Node* nh = hosll;
   Node* nt = NULL;
   while(k--)
   {
       nt = nh;
       nh = nh->next;
   }
   nt->next = nullptr;
   tosll->next = hosll;
   return {nh , nt};

}

int main()
{

    int n ; cin>>n; 
    Node* head = create(n);
    print(head);
    int x , y ,k;
    cin>>x>>y>>k;
   //  reaching to y ;
    Node* sp = head;
    Node* tosll;
    while (y--)
    {
        tosll = sp;
        sp = sp->next;
    }
    tosll->next = NULL;

   //  reaching to x 
   Node* fp =  NULL;
   Node* hosll = head;
   x--;
   while(x--)
   {
         fp = hosll;
         hosll = hosll->next;
   }
   
   if(fp) fp->next = NULL;

   vector<Node*>arr = rotatell(hosll,tosll , k);
    
   if(!fp)
   {
      arr[1]->next = sp;
      head = arr[0];
   }
   if(fp)
   {
      fp->next = arr[0];
      arr[1]->next = sp;
   }
  
    print(head);

    

}