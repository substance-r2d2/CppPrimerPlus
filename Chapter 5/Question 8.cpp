/*8. Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
You should include the cstring header file and use the strcmp() function to
make the comparison test.*/


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int arraySize = 50;

int main() 
{
  char word[arraySize];
  int count = 0;
  cout << "Enter words (to stop, type the word done): ";
  cin >> word; 
  while (strcmp(word, "done")) 
  {
	cin >> word;
	count++;
  }
  cout << "You entered a total of " << count << " words." << endl;
  system("pause");
  return 0;
}