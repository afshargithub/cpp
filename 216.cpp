/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
#include <math.h>
using namespace std;

int MyFunc(){
	int *ptr, X;
	ptr = &X;
	*ptr = pow (2, 3);
	*ptr = pow (*ptr, 2);
	return *ptr;
}

int main() {
	cout << MyFunc();
}

