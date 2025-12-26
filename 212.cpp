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
	int a, b, c;
	int * ptr;
	a = b = 172;
	(++a)++;
	ptr = &a;
	c = *ptr - b;
	cout << c;
}

