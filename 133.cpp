/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

int value = 0;
//---function definitions---
void calc()
{
	int value = 1;
	cout << ++value * 2;
}
int main() {
	int i;
	for (i=0; i < 4; i++) 
		calc(); //---function call---
}

