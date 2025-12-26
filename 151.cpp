/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

float MyAbs(float num)
{
	if(num < 0)
		return -num;
	return num;
}//function
int main()
{
	cout << MyAbs(9.8) << endl;
	cout << MyAbs(-3.14) << endl;
}
