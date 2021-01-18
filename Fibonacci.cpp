/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void fibonacci (int a)
{
  int n1 = 0, n2 = 1, n3, i = 1;
  cout << n1;
  cout << "\n" << n2;
  while (i <= a)
    {
      n3 = n1 + n2;
      n1 = n2;
      n2 = n3;
      cout << "\n" << n3;
      i++;
    }
}

int main ()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;
  fibonacci (n);
  return 0;
}
