#include<bits/stdc++.h>

using namespace std;

vector<int>V;

void pattern_matching_native(string T,string P)
{
    int n = T.length();
    int m = P.length();
    int i,j;
    for(i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(T[i+j] != P[j])
                break;
        }
        if(j==m)
            cout<<"pattern found at loc: "<<i<<endl;
    }

}

void LPS_table(string P)
{
    int n = P.length();
    //vector<int>V(n);
    V[0] = 0;
    int i=0,j=1;
    while(j<=n)
    {
        if(P[i] == P[j])
        {
            V[j] = i+1;
            i++;
            j++;
        }
        else
        {
            if(i==0)
            {
                V[j] = 0;
                j++;
            }
            else
            {
                i = V[i-1];
            }
        }
    }

    //cout<<V.size();

    /*for(int k=0;k<V.size();k++)
        cout<<V[k]<<" ";*/
}

int main()
{
    string T,P;
    //cin>>T;
    cin>>P;
    //pattern_matching_native(T,P);
    LPS_table(P);
}

