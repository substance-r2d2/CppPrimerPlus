/*8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/


#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
  string companyName;
  double diameter;
  int weight;
};

int main()
{
  Pizza* hut = new Pizza;
  cout << "Enter diameter of the pizza: ";
  cin >> hut->diameter;
  cout << "Enter company name: " << endl;
  getline(cin, hut->companyName);
  cout << "Enter weight of the pizza: ";
  cin >> hut->weight;
  cout << "Name: " << hut->companyName << endl;
  cout << "Diameter of the pizza: " << hut->diameter << endl;
  cout << "Weight of the pizza: " << hut->weight << endl;
  system("pause");
  return 0;
}