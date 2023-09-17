//Circular Queue
#include<bits/stdc++.h>
#define MAX 10
using namespace std;

int Q[MAX],f = -1,r = -1;

void printQueue()
{
    int i=f;
    for(; i!=r;i = (i+1)%MAX)
        cout<<Q[i]<<" ";
        cout<<Q[i];
    cout<<endl;
}
void Enqueue(int val)
{
    if((r+1)%MAX == f)
    {
        cout<<"Queue is full!"<<endl;
        exit(0);
    }
    else if(f == -1 && r == -1)
    {
        f++;
        r++;
    }
    else
    {
        r = (r+1)%MAX;
    }
    Q[r] = val;
}

void Dequeue()
{
    int val;
    if(f == -1 && r == 1)
    {
        cout<<"Queue is Empty!"<<endl;
        exit(0);
    }
    else if(f == r)
    {
        val = Q[f];
        f = r = -1;
    }
    else
    {
        val = Q[f];
        f = (f+1)%MAX;
    }
    cout<<"Deleted element: "<<val<<endl;

}
int main()
{
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
    printQueue();
    Dequeue();
    Dequeue();
    Enqueue(70);
    Enqueue(80);
    printQueue();
}

