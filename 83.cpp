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
	int a;
	static char c[] = "ABCD";
	for (a = 0; c[a] != '\0'; a++)
		if (a % 2 == 0) cout << c[a] << c[a];
}

