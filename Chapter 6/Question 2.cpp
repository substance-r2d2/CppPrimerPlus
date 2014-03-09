/*2. Write a program that reads up to 10 donation values into an array of double. (Or, if
you prefer, use an array template object.) The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.*/


#include <iostream>
#include <cctype>

using namespace std;
int main()
{
  double donation[10];
  double total = 0;
  double average = 0;
  int larger = 0;
  int i = 0;

  for (i = 0; i<10; i++)
  {
	cout << "Donation #" << i + 1 << ": ";
	if (!(cin >> donation[i]))
	{
	  cin.clear();
	  break;
	}
	else
	  total += donation[i];
  }
  if (i == 0)
	i++;
  average = total / i;
  cout << "\nThe sum is: " << total;
  cout << "\nThe average is: " << average;

  for (int j = 0; j<i; j++)
  {
	if (donation[j] > average)
	{
	  cout << "\nDonation #" << j + 1 << " is larger than average.";
	  larger++;
	}
  }

  cout << "\nDonations larger than average (qty): " << larger;

  system("pause");
  return 0;
}