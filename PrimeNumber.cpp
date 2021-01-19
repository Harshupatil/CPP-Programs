/******************************************************************************

    Prime number is a number that is greater than 1 and divided by 1 or itself. 
    In other words, prime numbers can't be divided by other numbers than itself or 1. 
    For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.

    Let's see the prime number program in C++. In this C++ program, 
    we will take an input from the user and check whether the number is prime or not.

*******************************************************************************/

#include <iostream>
using namespace std;

void primenumber(int n1)
{
    int flag=0;
    if(n1==1 || n1==0)
    {
        cout<<"Number is not prime";
    }
    else 
    {
        for(int i=2; i<=n1/2; i++)
        {
            if(n1%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Number is not prime";
        }
        else
        {
            cout<<"Number is prime";
        }
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number to check: ";
    cin>>n;
    primenumber(n);

    return 0;
}
