/*3. Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining
function, also called twice, should produce the remaining output.*/


#include <iostream>
using namespace std;

void func1()
{
  cout << "Three blind mice \n";
}

void func2()
{
  cout << "See how they run \n";
}

int main()
{
  func1();
  func1();
  func2();
  func2();
  system("pause");
  return 0;
}