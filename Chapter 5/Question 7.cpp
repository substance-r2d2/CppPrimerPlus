/*7. Design a structure called car that holds the following information about an automobile:
its make, as a string in a character array or in a string object, and the year
it was built, as an integer.Write a program that asks the user how many cars to catalog.
The program should then use new to create a dynamic array of that many car
structures. Next, it should prompt the user to input the make (which might consist
of more than one word) and year information for each structure. Note that this
requires some care because it alternates reading strings with numeric data (seeChapter 4). Finally, it should display the contents of each structure.A sample run
should look something like the following:
How many cars do you wish to catalog? 2
Car #1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car #2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser*/


#include <iostream>
#include <string>

using namespace std;

struct car
{
  string make;
  int buildYear;
};

int main()
{
  int num;
  cout << "How many cars do you wish to catalog? ";
  cin >> num;
  car *c = new car[num];
  for (int i = 0; i < num; i++)
  {
	cout << "Car #" << i+1 << endl;
	cin.get();
	cout << "Please enter the make : ";
	getline(cin, c[i].make);
	cout << "Please enter the year made : ";
	cin >> c[i].buildYear;
  }
  cout << "Here is your collection:" << endl;
  for (int i = 0; i < num; i++)
  {
	cout << c[i].buildYear << "," << c[i].make << endl;
  }
  system("pause");
  return 0;
}