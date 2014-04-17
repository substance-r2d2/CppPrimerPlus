/*5. Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.*/


#include <iostream>

using namespace std;

const int SIZE = 5;

template<class T>
T max5(T (&arr) [SIZE])
{
  T max = arr[0];
  for (int i = 1; i < SIZE; i++)
  {
	if (arr[i]>max)
	  max = arr[i];
  }
  return max;
}

int main()
{
  int x[SIZE] = { 5, 6, 7, 8, 9 };
  double y[SIZE] = { 10.5, 8.4, 77.25, 12.5, 1.02 };
  cout << max5(x) << endl;
  cout << max5(y) << endl;
  system("pause");
}