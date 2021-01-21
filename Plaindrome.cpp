/******************************************************************************
Plaindrome is number that is same on both side either we see it from right or from
left for example 212, 67876, 892298 etc. 
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, n1, reverse=0;
    cout<<"Enter the number: ";
    cin>>n;
    n1=n;
    while(n1 != 0)
    {
        int d = n1%10;
        n1 = n1/10;
        reverse = d + reverse*10;
    }
    if(n==reverse)
    {
        cout<<"Number is Plaindrome";
    }
    else
    {
        cout<<"Number is not Plaindrome";
    }

    return 0;
}
