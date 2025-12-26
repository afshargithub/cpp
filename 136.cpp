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
float GetGreatest(float n1, float n2, float n3)
{
	float biggest = n1;
	if (n2 > biggest)
		biggest = n2;

	if (n3 > biggest)
		biggest = n3;
	
	return biggest;
}

int main() 
{
	//---function call---
	cout << "biggest = " << GetGreatest(5.6 , 7.2, 6) << endl; 
	cout << "biggest = " << GetGreatest(4.6 , -3.14, 2) << endl; 
}

