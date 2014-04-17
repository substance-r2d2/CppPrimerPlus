/*2. The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a double, and an int and
uses the last three values to set the corresponding members of the structure.The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a CandyBar as an
argument and displays the contents of the structure. Use const where appropriate.*/


#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
  string name;
  float weight;
  int calories;
};

void assignValues(CandyBar& cb, char*c = "Millennium Munch", float w = 2.85, int cal = 350){
  cb.name = c;
  cb.weight = w;
  cb.calories = cal;
}

void display(const CandyBar& c)
{
  cout << "-----------------\n";
  cout << "NAME: " << c.name << endl;
  cout << "WEIGHT: " << c.weight << endl;
  cout << "CALORIES: " << c.calories << endl;
  cout << "-----------------\n";
}

int main()
{
  CandyBar candy1;
  CandyBar candy2;
  assignValues(candy1, "blah blah", 2.4, 100);
  assignValues(candy2);
  display(candy1);
  display(candy2);
  system("pause");
  return 0;
}