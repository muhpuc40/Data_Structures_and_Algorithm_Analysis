#include<bits/stdc++.h>
using namespace std;
int *QuickSort()
{
    static int a[]={0,2,2,1,1};
    int l=0;
    int r=5-1;

    while(l<r)
    {
        int pivot=a[r];
        int i=l-1;
        for(int j=l;j<r;j++)
        {
            if(a[j]<=pivot){
                i+=1;
                swap(a[i],a[j]);
            }
        }
        swap(a[i+1],a[r]);
        r=r-1;
    }
    return a;
}
int main(){
    int *ptr;
    ptr=QuickSort();
    for(int i=0;i<5;i++)
    {
        cout<< ptr[i] << endl;
    }
}
