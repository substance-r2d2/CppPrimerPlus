/*6. Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the number
of contributors and then solicit the user to enter the name and contribution of
each contributor.The information should be stored in a dynamically allocated array
of structures. Each structure should have two members: a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution.After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more.This list should
be headed by the label Grand Patrons.After that, the program should list the
remaining donors.That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word “none.”Aside from displaying
two categories, the program need do no sorting.*/


#include <iostream>
#include <string>

using namespace std;

struct influence
{
  string name;
  double donation;
};

int main()
{
  int number;
  int count = 0;
  cout << "Enter number of doners: ";
  cin >> number;
  influence *i = new influence[number];
  for (int j = 0; j < number; j++)
  {
	cin.get();
	cout << "Enter name of the doner: ";
	getline(cin, i[j].name);
	cout << "Enter donation: ";
	cin >> i[j].donation;
  }
  cout << "----GRAND PATRONS----" << endl;
  for (int j = 0; j<number;j++)
  {
	if (i[j].donation>10000)
	{
	  cout << i[j].name << endl;
	  ++count;
	}
  }
  if (count == 0)
  {
	cout << "NONE!" << endl;
  }
  delete[]i;
  system("pause");
  return 0;
}