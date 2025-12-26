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
int main()
{
	int i;
	string Names[NO_OF_ARRAY_CELLS];
	cout << "Enter " << NO_OF_ARRAY_CELLS << " character expessions : " << endl;
	for(i=0; i < NO_OF_ARRAY_CELLS; i++)
		cin >> Names[i];
	cout << endl << "Expressions are :" << endl;
	for(i=0; i < NO_OF_ARRAY_CELLS; i+=2)
		cout << Names[i] << endl;
}

