/*2. Write a program that asks the user to enter up to 10 golf scor
es, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.*/


#include <iostream>
#include <iomanip>

using namespace std;

const int size = 10;

void inputScore(int (&a)[size])
{
  int i;
  for (i = 0; i < size; i++)
  {
	cout << "Enter score no." << i+1 << " ,enter non numeric input to exit: ";
	if (!(cin >> a[i]))
	{
	  break;
	}
  }
}

void display(int(&a)[size])
{
  cout << "----SCORE----" << endl;
  for (int i = 0; i < size; i++)
  {
	if (a[i]>0)
	  cout << a[i] << "\t";
  }
  cout << endl;
}

void average(int(&a)[size])
{
  int sum = 0, i;
  for (i = 0; i < size; i++)
  {
	if (a[i]>0)
	  sum += a[i];
	else
	  break;
  }
  cout << "The average is : " << setprecision(3) << (float)sum / i;
}

int main()
{
  int score[size];
  inputScore(score);
  display(score);
  average(score);
  cout << endl;
  system("pause");
  return 0;
}