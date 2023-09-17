/***Creating Node Using Linked list***/

#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
int data ;
Node *next;
};
void printlist (Node *current)
{

    while (current != NULL)
    {

        cout <<current->data<<" ";
        current =  current ->next;

    }
}

void createnode (int N,Node *head)
{
    int first_value,n_val;
    Node *temp_value,*n_node;
    cin>>first_value;
    head->data = first_value;
    head->next =  NULL ;
    temp_value=head;
    for(int i=2;i<=N;i++)
    {

        n_node =(Node *)malloc(sizeof(Node));
        cin>>n_val;
        n_node->data = n_val;
        n_node->next = NULL;
        temp_value->next = n_node;
        temp_value= temp_value->next;
    }
    printlist(head);
}
int main()
{

    Node *head;
    head = (Node *)malloc(sizeof(Node));
    int n;
    cin>>n;
    createnode(n,head);
}
