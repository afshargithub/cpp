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
	int *i, a;
	i = &a;
	for (*i=10; *i < 16; (*i)++)
		cout << a << '\t';
}

