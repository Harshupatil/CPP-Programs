/******************************************************************************
We can find sum of digits of number, using loops and mathematical operators.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, n1, sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    n1 = n;
    while(n1!=0)
    {
        int d = n1%10;
        n1 = n1/10;
        sum = sum + d;
    }
    cout<<"Sum of digit: "<<sum;
    return 0;
}
