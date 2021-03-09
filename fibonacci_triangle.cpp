/******************************************************************************
c++ program to generate fibonacci triangle.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i=1, t1=0, t2=1, t3, a[20], n=5;
    a[0]=1;
    cout<<a[0];
    while(i<n)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        a[i]=t3;
        i++;
        cout<<"\n";
        for(int j=0; j<i; j++)
        {
            cout<<a[j]<<"\t";
        }
    }
    

    return 0;
}
