#include<iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};

Node * Deletefirst(Node *start,int data)
{
    if(start==NULL)
    {
        cout<<"underflow"<<endl;

    }

    else{
        Node *node1=start;
        start=start->next;
        cout<<"\nDeleteNode"<<node->info<<endl;
        delete node1;
    }
}