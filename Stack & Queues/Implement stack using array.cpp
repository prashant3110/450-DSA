#include<bits/stdc++.h>
using namespace std;
int top=-1;

int s[100];

void push(int item)
{
    if(top>=100)
    {
        cout<<"Overflow condition reached";
    }
    else
    {
        top++;
        s[top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Underflow condition reached";
    }
    else
    {
        int it=s[top];
        cout<<"The deleted item is "<<it<<endl;
        top--;
        
    }
}

void display()
{
    if(top==-1)
    {
        cout<<"The stack is empty";
    }
    else
    {
        cout<<"The elements of stack are: "<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<s[i]<<endl;
        }
    }
}

void peek()
{
    cout<<"The top of the stack is"<<s[top];
}

int main()
{
    push(4);
    push(10);
    pop();
    push(7);
    push(18);
    display();
    pop();
    display();
    
    return 0;
}
