/*3. Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  const int size = 50;
  char firstName[size];
  char lastName[size];
  char dest[size];
  cout << "Enter first name: ";
  cin >> firstName;
  cout << "Enter last name: ";
  cin >> lastName;
  strcat(lastName, ", ");
  strcat(lastName, firstName);
  strcpy(dest, lastName);
  cout << dest << endl;
  system("pause");
  return 0;
}