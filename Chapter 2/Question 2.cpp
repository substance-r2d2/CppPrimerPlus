/*2. Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)*/


#include <iostream>
using namespace std;

int main()
{
  double yards, furlongs;
  cout << "Enter distance in furlongs \n";
  cin >> furlongs;
  yards = furlongs * 220;
  cout << "The distance " << furlongs << " furlongs in yards is " << yards << endl;
  system("pause");
  return 0;
}