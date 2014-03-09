/*4. When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program
that can list members by real name, by job title, by secret name, or by a member’s
preference. Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit*/


#include <iostream>

const int strsize = 50;

struct bop {
  char fullname[strsize]; // real name
  char title[strsize]; // job title
  char bopname[strsize]; // secret BOP name
  int preference; // 0 = fullname, 1 = title, 2 = bopname
};

using namespace std;
int main()
{
  char choice;
  bop memberList[5] = { { "Wimp Macho", "Analyst", "I", 0 }, { "Raki Rhodes", "Developer", "Pity", 0 },
						{ "Celia Laiter", "Programmer", "The", 1 }, { "Hoppy Hipman", "IT guy", "Foo", 2 },
						 { "Pat Hand", "DBA", "-Mr.T", 1 } };

  cout << "Benevolent Order of Programmers Report" << endl;
  cout << "a.display by name b.display by title" << endl;
  cout << "c.display by bopname d.display by preference" << endl;
  cout << "q.quit" << endl;
 
  do{
	cin >> choice;
	switch (choice)
	{
	case 'a':
	  for (int i = 0; i < 5; i++)
	  {
		cout << memberList[i].fullname << endl;
	  }
	  cout << "Next choice :";
	  break;
	case 'b':
	  for (int i = 0; i < 5; i++)
	  {
		cout << memberList[i].title << endl;
	  }
	  cout << "Next choice :";
	  break;
	case 'c':
	  for (int i = 0; i < 5; i++)
	  {
		cout << memberList[i].bopname << endl;
	  }
	  cout << "Next choice :";
	  break;
	case 'd':
	  for (int i = 0; i < 5; i++)
	  {
		if (memberList[i].preference == 0)
		  cout << memberList[i].fullname << endl;
		else if (memberList[i].preference == 1)
		  cout << memberList[i].title << endl;
		else
		  cout << memberList[i].bopname << endl;
	  }
	  cout << "Next choice :";
	  break;
	default:
	  break;
	}
  } while (choice != 'q');
  cout << "Bye!" << endl;
  system("pause");
  return 0;
}