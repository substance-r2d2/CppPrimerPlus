/*1. Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don’t forget the cctype family.)
*/


#include <iostream>
#include <cctype>

using namespace std;

int main() 
{
  char ch;
  cout << "Enter input, enter '@' to exit: " << endl;
  cin.get(ch);
  while (ch != '@')
  {
	if (isalpha(ch))
	{
	  if (islower(ch))
	  {
		ch = toupper(ch);
		cout << ch << endl;
	  }
	  else
	  {
		ch = tolower(ch);
		cout << ch << endl;
	  }
	}
	cin.get(ch);
  }
  system("pause");
  return 0;
}