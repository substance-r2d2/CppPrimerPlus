/*3. Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.A sample run might look like this:
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.*/


#include <iostream>
#include <string>

using namespace std;

void changeCase(string &s)
{
  for (int i = 0; i < s.size(); i++)
  {
	s[i] = toupper(s[i]);
	cout << s[i];
  }
  cout << endl;
}

int main()
{
  string s;
  cout << "Enter a string (q to quit): ";
  while (getline(cin,s))
  {
	if (s == "q")
	  break;
	changeCase(s);
	cout << "Next string(q to quit) : ";
  }
  cout << "Bye! " << endl;
  system("pause");
  return 0;
}