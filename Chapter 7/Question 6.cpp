/*6. Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array, and then
show the array.*/


#include <iostream>
#include <array>

using namespace std;

int Fill_Array(array<double, 15> &a)
{
  int count=0;
  for (int i = 0; i < a.size(); i++)
  {
	cout << "Enter 'q' to quit. " << endl;
	cout << i+1 << " : ";
	if (!(cin >> a[i]))
	{
	  break;
	}
	++count;
  }
  return count;
}

void Show_Array(array<double, 15> &a,int count)
{
  for (int i = 0; i < count; i++)
  {
	cout << a[i] << "\t";
  }
  cout << endl;
}

void Reverse_Array(array<double, 15> &a, int count)
{
  double temp = 0;
  int i = 0, j = (count - 1);
  for (i, j; i < j; i++, j--)
	{
	  temp = a[i];
	  a[i] = a[j];
	  a[j] = temp;
	}
}

int main()
{
  int count;
  array<double, 15> a = { 0 };
  count = Fill_Array(a);
  Show_Array(a,count);
  Reverse_Array(a, count);
  Show_Array(a, count);
  system("pause");
  return 0;
}