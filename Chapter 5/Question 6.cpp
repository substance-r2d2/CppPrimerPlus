/*6. Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
  string year[3][12] = { { "jan", "feb", "march", "april", "may", "june", "july", "august", "sept", "oct", "nov", "dec" },
                         { "jan", "feb", "march", "april", "may", "june", "july", "august", "sept", "oct", "nov", "dec" },
						 { "jan", "feb", "march", "april", "may", "june", "july", "august", "sept", "oct", "nov", "dec" } 
					    };
  int sales[3][12];
  int total[3];
  for (int j = 0; j < 3; j++)
  {
	cout << "-----ENTER SALES FOR YEAR " << j+1 << "-----" << endl;
	for (int i = 0; i < 12; i++){
	  cout << "Enter sales for " << year[j][i] << ": ";
	  cin >> sales[j][i];
	}
  }
  for (int j = 0; j < 3; j++)
  {
	cout << "-----SALES FOR YEAR " << j + 1 << "-----" << endl;
	for (int i = 0; i < 12; i++){
	  total[j] += sales[i][j];
	}
	cout << "Total sales: " << total[j] << endl;;
  }
  system("pause");
  return 0;
}