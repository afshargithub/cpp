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
	int i;
	char harf[7] = {'R', 'E', 'D', 'B', 'O', 'O', 'K'};
	char seda[5] = {'U', 'A', 'E', 'I', 'O'};
	char giga[5];
	giga[0] = harf[0];
	giga[1] = seda[1];
	giga[2] = harf[2];
	giga[3] = seda[3];
	giga[4] = harf[4];
	for(i=0; i < 5; i++)
		cout << giga[i];
	return 0;
}

