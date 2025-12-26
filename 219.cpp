/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
void test (int *, int *, int);
int main() {
	int x = 2, y = 3, z = 4;
	cout << x << y << z << ", ";
	test (&x, &y, z);
	cout << x << y << z;
}
void test (int *z, int *y, int x)
{
	*z += x - *y;
	x += 5;
	*y -= *z - x;
}

