/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, E;
	A = 10;
	B = 22;
	C = 45;
	D = 76;
	E = 98;

	int * ptr[5];
	ptr[0] = &A;
	ptr[1] = &B;
	ptr[2] = &C;
	ptr[3] = &D;
	ptr[4] = &E;
	
	for(int i=0; i < 5; i+=2)
		cout << *ptr[i] << '\t';
}

