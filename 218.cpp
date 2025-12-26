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
	int num1, num2;
	int *p, *q;
	num1 = 55;
	num2 = 77;
	p = &num1;
	q = &num2;
	
	cout << *p * *q << endl;
	if (*p == num1)
		cout << "OK" << endl;
	else if (*q == num2)
		cout << "ok" << endl;
	else
		cout << "Error";
	return 0;
}

