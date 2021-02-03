/******************************************************************************
    queue using array:- 
    front: variable store's the first index of array
    rear: variable store's the last index of array
    enqueue: insert element into array
    dequeue: delete element from array
*******************************************************************************/

#include <iostream>
using namespace std;

int queue[100], front=0, rear=0, n=10;
void enqueue(int val)
{
    if(rear == n)
    {
        cout<<"\nQueue is full";
    }
    else
    {
        queue[rear]=val;
        rear++;
    }
}
void dequeue()
{
    if(rear==front)
    {
        cout<<"\nQueue is empty";
    }
    else
    {
        cout<<"\nDequeue element is: "<<queue[front];
        front++;
    }
}
void display()
{
    cout<<"\nElements in queue are: ";
    for(int i=front; i<rear; i++)
    {
        cout<<"\t"<<queue[i];
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    return 0;
}
