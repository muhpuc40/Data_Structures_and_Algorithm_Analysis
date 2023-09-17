#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
int data ;
Node *next;
};
Node *head;
void printlist (Node *current)
{
    while (current != NULL)
    {
        cout <<current->data<<" ";
        current =  current ->next;
    }
}

void create_node (int N)
{
    int first_value,n_val;
    Node *tmp,*n_node;
    cin>>first_value;
    head->data = first_value;
    head->next =  NULL ;
    tmp=head;
    for(int i=2;i<=N;i++)
    {
        n_node =(Node *)malloc(sizeof(Node));
        cin>>n_val;
        n_node->data = n_val;
        n_node->next = NULL;
        tmp->next = n_node;
        tmp= tmp->next;
    }
    cout<<"Created Node : "<<endl;
    printlist(head);
}

 void deleteAtFirst()
 {
    head= head->next;
 }

 void delete_end()
 {
     Node *tmp,*prev;
     tmp = head;
     while(tmp->next != NULL)
     {
         prev = tmp;
         tmp = tmp->next;
     }

     prev->next = NULL;
     cout<<endl;
     printlist(head);
 }

 void delete_anypos(int xy)
{
      cin>>xy;
   Node *tmp , *prev;
    tmp = head;
    while(tmp->next != NULL)
    {
        if(tmp->next->data == xy)
        {
            prev = tmp;
            prev->next = tmp->next->next;
        }
      else
      {
         tmp = tmp -> next;
      }
    }
    cout <<"After delete :"<<endl;
    printlist(head);
}
    int main()
{
    head = (Node *)malloc(sizeof(Node));
    int n,z;
    cout<<"Size of integer : ";
    cin>>n;
    cout <<"Input " <<n<<" number :";
    create_node(n);
    deleteAtFirst();
    cout<<endl;
    cout<<"deletion from Beginning : "<<endl;
    printlist(head);
    cout<<"\ndeletion at End : ";
    delete_end();
    cout<<"\nDelete any position  : ";
    delete_anypos(z);
}
