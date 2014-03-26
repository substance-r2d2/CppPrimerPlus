/*1. Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate
the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)*/


#include <iostream>
#include <iomanip>

double haronicMean(double x, double y)
{
  return (2.00 * x*y / (x + y));
}

using namespace std;


int main()
{
  double x, y;
  cout << "Enter pair of numbers, enter zeros to exit: ";
  cin >> x >> y;
  while (x != 0 && y != 0)
  {
	cout << setprecision(3) << haronicMean(x, y) << endl;
	cout << "Enter pair of numbers, enter zeros to exit: ";
	cin >> x >> y;
  }
  system("pause");
  return 0;
}