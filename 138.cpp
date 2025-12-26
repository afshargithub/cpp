/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

//---function definitions---
float equation(float x, float y, float z)
{
	return (2*x * 3*z * 5*y) / (2 + z);
}

int main() 
{
	//---function call---
	cout << "1,1,1         : " << equation(1, 1, 1)         << endl; 
	cout << "0.5,0.33,0.25 : " << equation(0.5, 0.33, 0.25) << endl; 
	cout << "3,4,6         : " << equation(3, 4, 6)         << endl; 
}

