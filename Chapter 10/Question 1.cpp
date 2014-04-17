/*1. Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.*/

#include <iostream>
#include <string>

using namespace std;


class Bank_Account
{
private:
  string name;
  string accNo;
  double balance;
public:
  Bank_Account(string n, string a, double b)
  {
	name = n;
	accNo = a;
	balance = b;
  }
  void display()
  {
	cout << "NAME: " << name << endl;
	cout << "ACC. NO." << accNo << endl;
	cout << "BALANCE: " << balance << endl;
  }
  void deposit(double depo)
  {
	balance += depo;
	cout << "Deposited " << depo << endl;
  }
  void withdraw(double with)
  {
	if (with <= balance)
	{
	  balance -= with;
	  cout << "Withdrew " << with << endl;
	}
	else
	{
	  cout << "Insufficient funds! \n";
	}
  }
};


int main()
{
  Bank_Account a("SUBSTANCE r2d2", "1245AB54AD", 100);
  a.display();
  a.deposit(200);
  a.display();
  a.withdraw(1000);
  a.display();
  system("pause");
}