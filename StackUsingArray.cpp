/******************************************************************************
    stack using array:- 
    top: variable store's the last index of array
    push: insert element into array
    pop: delete element from array
*******************************************************************************/

#include <iostream>
using namespace std;

int stack[100], top=-1, n=10;
void push(int val)
{
    if(top>n)
    {
        cout<<"Overflow";
    }
    else
    {
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        cout<<"\npoped element is: "<<stack[top];
        top--;
    }
}
void display()
{
    for(int i=0; i<=top; i++)
    {
        cout<<"\n"<<stack[i];
    }
}
int main()
{
    push(10);
    push(20);
    display();
    pop();
    display();
    return 0;
}
