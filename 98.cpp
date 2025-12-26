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
	int x=2, y=3, z=4;
	z += (!(x <= y) || (y > z - x) && (z > y - x)) ? ++x : z / x + 3;
	
	cout << z;
}

