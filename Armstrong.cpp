/******************************************************************************
Armstrong Number, is the number that is equal to sum of cube of it's degits.
For example 0, 1, 153, 370, 371, 407 are armstrong numbers.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, n1, sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    n1=n;
    while(n1!=0)
    {
        int d = n1%10;
        n1 = n1/10;
        sum = sum + d*d*d;
    }
    if(sum==n)
    {
        cout<<"Number is Armstrong number";
    }
    else
    {
        cout<<"Number is not Armstrong number";
    }
    return 0;
}
