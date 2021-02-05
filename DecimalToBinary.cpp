/******************************************************************************
Convert decimal to binary, 
step 1: find mod of number and 2, this will be the binary dight of given number 
step 2: divide number by 2, and replace the orignal number with answer of division. 
step 3: repeat step 1 and step 2, until the number greater than 2. 
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, i=0, a[10];
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        a[i]=n%2;               
        n=n/2;
        i++;
    }
    cout<<"Binary number is: ";
    for(int j=0; j<i; j++)
    {
        cout<<a[j];
    }
    return 0;
}
