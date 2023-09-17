#include<bits/stdc++.h>
#define MAX 10
using namespace std;

int Q[MAX];
int f = -1,r = -1;

void printQueue()
{
    for(int i= f;i<=r;i++)
        cout<<Q[i]<<" ";

    cout<<endl;
}

void Enqueue(int val)
{
    if(r == MAX - 1)
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
        r++;
    }
    Q[r] = val;
    printQueue();

}
void Dequeue()
{
    int result;
    if(f == -1 && r == -1)
    {
        cout<<"Queue is empty!"<<endl;
        exit(0);
    }
    else if(f == r)
    {
        f = r = -1;
    }
    else
    {
        result = Q[f];
        f++;
    }
    cout<<"Deleted element: "<<result<<endl;
    printQueue();
}


int main()
{
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);

    Dequeue();
}
