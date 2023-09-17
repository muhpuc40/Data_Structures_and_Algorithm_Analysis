//merge 2 input of element

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10],b[10],c[20], k=0;
    for(int i=0; i<5; i++)
    {
        cin>>ar[i];
        c[k]=ar[i];
        k++;
    }
    k--;
        for(int i=0; i<5; i++)
        {
            cin>>b[i];
            c[k]=b[i];
            k++;
        }
    for(int i = 0; i<k; i++)
    {
        cout<<c[i]<<endl;
    }
}
