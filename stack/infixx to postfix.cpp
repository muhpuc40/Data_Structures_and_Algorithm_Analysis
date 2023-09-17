#include<bits/stdc++.h>

using namespace std;

stack<char>S;
string r;

void printStack(stack<char>s)
{
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}

int check_level(char c)
{
    if(c == '^')
        return 1;
    else if((c == '*') || (c == '/') || (c == '%'))
        return 2;
    else if((c == '+') || (c == '-'))
        return 3;
}

void infix_to_postfix(string input)
{
    char c1;
    for(int i=0;i<input.length();i++)
    {
        c1 = input[i];
        if(c1>='A' && c1<='Z')
        {
            r = r + c1;
        }
        else if(c1 == '(')
        {
            S.push(c1);
        }

        else if(c1 == ')')
        {
            while(S.top() != '(')
            {
                r = r + S.top();
                S.pop();
            }

            S.pop();
        }

        else
        {
            while(!S.empty() && (check_level(c1)>=check_level(S.top())))
            {

                    r = r + S.top();
                    S.pop();
            }
            S.push(c1);
        }
    }

    while(!S.empty())
    {
        r = r + S.top();
        S.pop();
    }
        cout<<"Result: "<<r<<endl;
        //printStack(S);
}


int main()
{
   string input;
   cin>>input;
   infix_to_postfix(input);

}
