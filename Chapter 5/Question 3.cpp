/*3. Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "---- ENTER 0 TO EXIT ----" << endl;
  int num1, sum = 0;
  cout << "Enter number to add to the sum: ";
  cin >> num1;
  while (num1 != 0)
  {
	sum += num1;
	cout << "Sum of entries till date: "<< sum << endl;
	cout << "Enter number to add to the sum: ";
	cin >> num1;
  }
  return 0;
}