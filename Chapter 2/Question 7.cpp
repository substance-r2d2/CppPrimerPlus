/*7. Write a program that asks the user to enter an hour value and a minute value.The
main() function should then pass these two values to a type void function that displays
the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28*/


#include <iostream>
using namespace std;

void displayTime(int hrs,int minutes)
{
  cout << "Time: " << hrs << ":" << minutes << endl;
}

int main()
{
  int hrs, minutes;
  cout << "Enter the number of hours: ";
  cin >> hrs;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  displayTime(hrs, minutes);
  system("pause");
  return 0;
}