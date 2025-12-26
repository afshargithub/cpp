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

int main() {
	int N, *ptr;
	ptr = &N;
	*ptr = pow (2, 3);
	cout << *ptr << endl;
	*ptr = pow (*ptr, 2);
	cout << N << endl;
}

