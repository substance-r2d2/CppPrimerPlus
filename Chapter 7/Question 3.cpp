/*3. Here is a structure declaration:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
a. Write a function that passes a box structure by value and that displays the
value of each member.
b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.*/


#include <iostream>
#include <iomanip>

using namespace std;

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void display(box b)
{
  cout << "Maker: " << b.maker << endl;
  cout << "Height: " << b.height << endl;
  cout << "Width: " << b.width << endl;
  cout << "Length: " << b.length << endl;
  cout << "Volume: " << b.volume << endl;
}

void volume(box *b)
{
  b->volume = b->height*b->length*b->width;
}

int main()
{
  box b1 = { "blah Mcblah", 10, 10, 10 };
  volume(&b1);
  display(b1);
  cout << endl;
  system("pause");
  return 0;
}