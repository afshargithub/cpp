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
float equation(int n)
{
	int i;
	float result;
	for(result=0, i=1; i <= n; i++)
		result += 1.0/i;
	return result;
}

int main() 
{
	//---function call---
	cout << "1 : " << equation(1) << endl; 
	cout << "2 : " << equation(2) << endl; 
	cout << "3 : " << equation(3) << endl; 
	cout << "4 : " << equation(4) << endl; 
}

