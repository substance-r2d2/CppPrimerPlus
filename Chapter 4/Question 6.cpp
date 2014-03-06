/*6. The CandyBar structure contains three members, as described in Programming
Exercise 5.Write a program that creates an array of three CandyBar structures, initializes
them to values of your choice, and then displays the contents of each structure.*/


#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
  string brandName;
  double weight;
  int calories;
};

int main()
{
  CandyBar snack[3] = { { "Mocha Munch", 2.3, 350 }, { "ChocEarly", 3.88, 400 }, { "HamanaHamna", 88.2, 77777 } };
  for (int i = 0; i < 3; i++)
  {
	cout << "----DETAILS OF CANDYBAR NO. " << i + 1<<"----\n";
	cout << "Name: " << snack[i].brandName << endl;
	cout << "Weight: " << snack[i].weight << endl;
	cout << "calories" << snack[i].calories << endl;
  }
  system("pause");
  return 0;
}