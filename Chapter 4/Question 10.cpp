/*10. Write a program that requests the user to enter three times for the 40-yd dash (or
40-meter, if you prefer) and then displays the times and the average. Use an array
object to hold the data. (Use a built-in array if array is not available.)*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
  int dash[3], sum = 0;
  for (int i = 0; i < 3; i++)
  {
	cout << "Enter time no." << i + 1 << " for the 40m dash: ";
	cin >> dash[i];
  }
  for (int i = 0; i < 3; i++)
  {
	sum += dash[i];
  }
  cout << "Average is " << sum / 3 << endl;
  system("pause");
  return 0;
}