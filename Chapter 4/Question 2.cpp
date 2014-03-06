/*2. Rewrite Listing 4.4, using the C++ string class instead of char arrays.*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name, dessert;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Enter your favorite dessert: ";
  getline(cin, dessert);
  cout << "I have some delicious " << dessert << " for you, " << name << endl;
  system("pause");
  return 0;
}