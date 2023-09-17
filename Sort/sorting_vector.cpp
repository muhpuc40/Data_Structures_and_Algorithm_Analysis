#include<bits/stdc++.h>

using namespace std;

void selection_sort(vector<int>&S)
{
    int min_val;

    for(int i=0;i<S.size();i++)
    {
        min_val = i;
        for(int j=i+1;j<S.size();j++)
        {
            if(S[j]<S[min_val])
                min_val = j;
        }
        swap(S[i],S[min_val]);
    }

    for(int i=0;i<S.size();i++)
        cout<<S[i]<<" ";
}

void bubble_sort(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i] > v[j])
                swap(v[i],v[j]);
        }
    }

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}

int main()
{
    vector<int>V;
    int val,n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>val;
        V.push_back(val);
    }

   // bubble_sort(V);
   selection_sort(V);
}
