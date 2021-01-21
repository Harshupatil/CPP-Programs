/******************************************************************************
Factorial of number is the product of all numbers from 1 to that number, it is 
denoted as n!. For example
3! = 1*2*3 = 6
5! = 1*2*3*4*5 = 120
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, factorial=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial*i; 
    }
    cout<<"Factorial of "<<n<<" is: "<<factorial;
    return 0;
}
