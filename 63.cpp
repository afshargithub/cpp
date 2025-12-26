/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define CELLS 15
int main()
{
	int DATA[CELLS] = {12, 5, 66, 5, 8, -4, 162, 34,
	                   7, 11, 5, 162, 13, 220, 135};
	int i, sc, Count=0;

	cout << "Adadi ra baraye jostojo vared konid : ";
	cin >> sc;

	for(i=0; i < CELLS; i++)
		if ( DATA[i] == sc )
			Count++;
	cout << "Tedade tekrare " << sc << " : " << Count;
}

