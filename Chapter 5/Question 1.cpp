/*1. Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num1, num2, sum = 0;
  cout << "Enter the smaller number: ";
  cin >> num1;
  cout << "Enter the bigger  number: ";
  cin >> num2;
  for (int i = num1; i <= num2; i++)
  {
	sum += i;
  }
  cout << "Sum of numbers from " << num1 << " to " << num2 << " is " << sum << endl;
  system("pause");
  return 0;
}