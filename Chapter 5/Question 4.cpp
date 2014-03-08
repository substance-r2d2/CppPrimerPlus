/*4. Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
10% of the original investment, or $10 each and every year:
interest = 0.10 × original balance
At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
of the current balance, including previous additions of interest:
interest = 0.05 × current balance
Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
$105, or $5.25, and so on.Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
  double daphneInvest = 100;
  double cleoInvest = 100;
  int years=0;
  do{
	daphneInvest += 10;
	cleoInvest += 0.05*cleoInvest;
	years++;
	cout << "After year " << years << endl;
	cout << "Investment of Daphne: " << daphneInvest << endl;
	cout << "Investment of Cleo: " << cleoInvest << endl;
  } while (daphneInvest > cleoInvest);
  cout << "Years required for Cleo's investment to overtake Daphne's investment are: " << years << endl;
  system("pause");
  return 0;
}