/*6. Write a program that has main() call a user-defined function that takes a distance
in light years as an argument and then returns the distance in astronomical units.
The program should request the light year value as input from the user and display
the result, as shown in the following code:
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
1 light year = 63,240 astronomical units*/


#include <iostream>
using namespace std;

double toAstronomicalUnits(double lightYears)
{
  return lightYears * 63240;
}

int main()
{
  double lightYears;
  cout << "Enter the number of light years: ";
  cin >> lightYears;
  cout << lightYears << " light years = " << toAstronomicalUnits(lightYears) << " astronomical units\n";
  system("pause");
  return 0;
}