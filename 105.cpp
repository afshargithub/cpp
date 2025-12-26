/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	for (int x = 1; x <= 3; x++)
		for (int y = 1; y <= 3; y++)
			if (y > x) 
				break;
			else 
				cout << x * y;
}
