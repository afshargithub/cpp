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
	int *p=new int, *q=new int;
	*p = 5;
	*q = 7;
	cout << *p * *q << endl;
	cout << p << endl << q << endl;
	if (p == q)
		cout << "wow!!!!!" << endl;
	else
		cout << p - q;	
	delete p;
	delete q;
	return 0;
}

