#include<iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};

Node* Insertatlast(Node* start, int data)
{
    Node* temp = new Node; // Allocate memory for the new node
    temp->info = data;     // Assign data to the new node
    temp->next = NULL;     // The new node will be the last node, so next is NULL

    if(start == NULL)
    {
        start = temp;      // If the list is empty, the new node is the first node
    }
    else
    {
        Node* node1 = start;
        while(node1->next != NULL) // Traverse to the last node
        {
            node1 = node1->next;
        }
        node1->next = temp; // Link the last node to the new node
    }

    return start;
} 

int main()
{
    Node* start = NULL;
    for(int i = 1; i <= 5; i++)
    {
        start = Insertatlast(start, i);
        cout << endl;
        for(Node* node1 = start; node1 != NULL; node1 = node1->next)
        {
            if(node1->next!=NULL)
            cout << node1->info << "->";
            else
            {
                cout<<node1->info;
            }
        }
    }

    return 0;
}
