/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

int GetNumberOfDigits(unsigned long int num)
{
	int counter=1;
	while(num / 10 != 0)
	{
		num /= 10;
		counter++;
	}
	return counter;
}//function
int main()
{
	cout << GetNumberOfDigits(54546) << endl;
	cout << GetNumberOfDigits(10) << endl;
	cout << GetNumberOfDigits(1347) << endl;
	cout << GetNumberOfDigits(162) << endl;
	cout << GetNumberOfDigits(162000152) << endl;
}
