/*9. Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.*/


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() 
{
  string word;
  int count = 0;
  cout << "Enter words (to stop, type the word done): ";
  cin >> word; 
  while (!(word == "done")) 
  {
	cin >> word;
	count++;
  }
  cout << "You entered a total of " << count << " words." << endl;
  system("pause");
  return 0;
}