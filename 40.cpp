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
	int x;
	cout << "Please enter a number :";
	cin >> x;
	switch (x)
	{
		case 1:
			cout << "x is 1";
		case 2:
			cout << "x is 2";
			break;
		default:
			cout << "unknown value";
	}
	return 0;
}

