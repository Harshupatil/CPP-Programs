/******************************************************************************
Common factors of two numbers, this are the numbers which divide both input 
numbers. 
*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
	int a, b, count=0, n;
	cin >> a;
	cin >> b;
	if(a<b)
	{
		n=a;
	}	
	else
	{
		n=b;
	}									
	for(int i=1; i<=n; i++)
	{
		if(a%i==0 && b%i==0)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}