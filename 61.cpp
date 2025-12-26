/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define CELLS 10
int main() 
{
	int index, Num[CELLS];
	
	cout << "Input : ";
	for(index=0; index < CELLS; index++)
		cin >> Num[index];
	
	cout << "Output : ";
	for(index=CELLS-1; index >= 0 ; index--)
		cout << Num[index] << ' ';
	return 0;
}

