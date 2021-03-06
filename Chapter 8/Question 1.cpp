/*1. Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the number
of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly function,
but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.*/


#include <iostream>
#include <string>

using namespace std;

int times = 0;

void printString(string& s){
  cout << s << endl;
  ++times;
}

void printString(string& s, int n)
{
  if (n > 0){
	for (int i = 0; i < times; i++)
	{
	  cout << s << endl;
	}
  }
}

int main()
{
  string s;
  cout << "Enter a string ";
  getline(cin, s);
  printString(s);
  printString(s);
  printString(s, 1);
  system("pause");
  return 0;
}