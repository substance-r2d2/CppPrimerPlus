/*5. Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.*/


#include <iostream>

using namespace std;

long long factorial(int n)
{
  if (n > 0)
  {
	return(n*factorial(n - 1));
  }
  else
	return 1;
}

int main()
{
  using namespace std;
  int num;
  cout << "Enter input to find factorial. " << endl;
  cout << "Press 'q' to quit. ";
  while (cin>>num)
  {
	cout << factorial(num) << endl;
  }
  system("pause");
  return 0;
}