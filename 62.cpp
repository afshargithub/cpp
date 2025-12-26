/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define CELLS 20	
int main()
{
    int AR[CELLS] = {162, 1, 72, 2, 313, 3, 110, 4,
	                 125, 5, -244, 98, -125, 162,
					 75, 87, -222, -314, 432, 567};
	int sc, i;
	cout << "Enter a number for seraching: ";
	cin >> sc;
	for(i=0; i < CELLS; i++)
	{
		if ( AR[i] == sc )
		{
			cout << "index : " << i << endl;
			break;
		}
	}
	if( i == CELLS )
		cout << "Not found";
}

