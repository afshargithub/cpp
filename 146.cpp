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
int GetDigits(unsigned int num)
{
	int counter;
	for(counter=1; (num/=10) != 0; counter++)
		;
	return counter;
}

int main() 
{
	//---function call------------------
	cout << "one   digit  : " << GetDigits(6) << endl;
	cout << "two   digits : " << GetDigits(72) << endl;
	cout << "three digits : " << GetDigits(941) << endl;
	cout << "four  digits : " << GetDigits(4892) << endl;
	cout << "five  digits : " << GetDigits(94620) << endl;
}

