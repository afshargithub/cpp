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
	short int a[] = {22, 33, 44};
	cout << *a;
	for(short int *p = a; p < a + 3; p++)
		cout << *p;
}
