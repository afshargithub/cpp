/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define NO_OF_ARRAY_CELLS 10
void DisplayNumberRepeatition(int *AR)
{
	int i, k, numCount;
	cout << endl << "Number" << '\t' << "Times" << endl;
	cout.width(20);	
	cout.fill('-');	
	cout << '-' << endl;
	for(i=0; i < NO_OF_ARRAY_CELLS; i++)
		if (AR[i] != -1)
		{
			cout << "  " << AR[i] << '\t';
			
			//****** search array for finding number in it *******
			numCount = 1;
			for(k=i+1; k < NO_OF_ARRAY_CELLS; k++)
				if(AR[k] == AR[i])
				{
					numCount++;
					AR[k] = -1;
				}
			//****************************************************
			
			cout << "  " << numCount << endl;
		}//if
}//function
int main()
{
	int i, DATA[NO_OF_ARRAY_CELLS];
	cout << "Enter " << NO_OF_ARRAY_CELLS << " numbers : ";
	for(i=0; i < NO_OF_ARRAY_CELLS; i++)
		cin >> DATA[i];
	DisplayNumberRepeatition(DATA);
}//main

