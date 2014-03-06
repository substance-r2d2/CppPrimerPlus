/*9. Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.*/


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
  CandyBar *snack = new CandyBar[3];
  for (int i = 0; i < 3; i++)
  {
	cin.clear();
	cout.flush();
	cout << "----ENTER DETAILS OF CANDY NO. " << i+1 << " ----" << endl;
	cout << "Enter brand name: ";
	getline(cin, snack[i].brandName);
	cout << "Enter calorie content: ";
	cin >> snack[i].calories;
	cout << "Enter weight: ";
	cin >> snack[i].weight;
  }

  for (int i = 0; i < 3; i++)
  {
	cout << "----DETAILS OF CANDYBAR NO. " << i + 1 << "----\n";
	cout << "Name: " << snack[i].brandName << endl;
	cout << "Weight: " << snack[i].weight << endl;
	cout << "calories" << snack[i].calories << endl;
  }

  system("pause");
  return 0;
}