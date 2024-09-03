#include <iostream>
using namespace std;

struct Node 
{
    int info;
    Node *next;
};

Node * InsertFirst(Node *start,int data)
{
    Node *temp=new Node;
    temp->info=data;
    if(start==NULL)
    {
        start=temp;
        start->next=NULL;
        
    }
    else
    {
        temp->next=start;
        start=temp;
    }
    return temp;
    
}

int main() {
  Node *start=NULL;
  
  for(int i=1;i<=15;i++)
  start=InsertFirst(start,i);
  
  cout<<endl;
  for(Node *node1=start;node1!=NULL;node1=node1->next)
  cout<<node1->info<<" ";
    return 0;
}