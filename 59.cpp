/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
int main() 
{
	string asami[10] = {"Hamid", "Rozita", "Azita", "Narges", "Farhad", 
	                    "England", "French", "English", "Turkish", "Greek"};
	int k, i;
	cout << "Enter a number (1 .. 10) : ";
	cin >> k;
	while ( !(k >= 1 && k <= 10) )
	{
		cout << endl << "Enter a number (1 .. 10) again : ";
		cin >> k;
	}
	cout << endl;
	cout << endl;
	cout << asami[k-1] << endl;
	return 0;
}


