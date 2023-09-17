#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    Node *next;

};
void printList(Node *current)
{
    while(current !=NULL)
    {
        cout<<current->data<<" " ;
        current = current->next;
    }
}
int main()
{
    Node *head;
    Node *first_node = NULL;
    Node *second_node = NULL;
    Node *third_node = NULL;


    first_node = (Node *)malloc(sizeof(Node));
    second_node  = (Node *)malloc(sizeof(Node));
    third_node  = (Node *)malloc(sizeof(Node));

    first_node->data = 10;
    second_node->data = 20;
    third_node->data = 30;

    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = NULL;


    head= first_node;
    printList(head);
}


