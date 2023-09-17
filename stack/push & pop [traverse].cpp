#include<bits/stdc++.h>
#define MAX 20
using namespace std;

int item[MAX-1];
int top=-1;
void traverse()
{
    int i;
    for( i=0;i<=top;i++)
        cout<<item[i]<<" ";
}

void push(int val)
{
    if(top==MAX-1)
    {
        cout<<"Stack overflow!"<<endl;
        exit(0);
    }
    else
    {
        top=top+1;
        item [top]=val;
    }
    cout<<endl;
    traverse();
}

void pop()
{
    int r;
    if(top==-1)
    {
        cout<<endl;
        cout<<"Stack underflow"<<endl;
        exit(0);
    }
    else{
        r=item[top];
        top=top-1;
        cout<<endl;
    }
    cout<<"Pooped value: "<<r;
}
int main()
{
    push(5);
    push(10);
    push(25);
    push(15);

    pop();
    pop();
    pop();
    pop();
    pop();

}

