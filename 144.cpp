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
float MyDivide(float num1, float num2)
{
	return num1 / num2;
}

int main() 
{
	float a , b; //a / b
	cout << "enter a : ";
	cin >> a;
	cout << "enter b : ";
	cin >> b;
	if(b != 0)
		//---function call---
		cout << "a / b : " << MyDivide(a, b) << endl; 
	else
		cout << "ERROR : b is zero, try again..." << endl; 		
}

