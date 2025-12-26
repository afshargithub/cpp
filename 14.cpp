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
	int a, b;
	cout << "Please Enter Value of a and b " << endl;
	cin >> a;
	cin >> b;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl << "b=" << b;
}


