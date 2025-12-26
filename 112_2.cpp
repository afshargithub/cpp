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
	int  a=5, b=-7;
	bool x=true, y=false;
	
	b = a + b;
	y = x || y;
	x = x && y;
	if (x || y && !x)
		cout << x << y;
}

