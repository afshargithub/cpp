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

//---function definitions---
float MyPow(int base, int exp)
{
	int result;
	for(result=1; exp > 0; exp--)
		result *= base;
	return result;
}

int main() 
{
	//---function call------------------
	cout << "my  power function 2,3 : " << MyPow(2, 3) << endl;
	cout << "my  power function 6,0 : " << MyPow(6, 0) << endl;
	cout << "---------------------------" << endl;
	cout << "c++ power function 2,3 : " <<   pow(2, 3) << endl;
	cout << "c++ power function 6,0 : " <<   pow(6, 0) << endl;
}

