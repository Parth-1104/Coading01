#include<iostream>
using namespace std;

class Node{
    int val;
    Node *next;
    Node(int data)
    {
        val=data;
        next=NULL;
    }

    int insertAthead(Node* &head,val)
    {
        Node * new_node=new Node(5);
        new_node->next=head;
        head=new_node;
        return 0;
    }
    

    void printll()
};