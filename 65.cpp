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
	int i, k, sc, DATA[5];
	cout << "Enter five numbers : ";
	for(i=0; i < 5; i++)
		cin >> DATA[i];
	cout << endl << "Value" << '\t' << "Chart" << endl;
	
	cout.width(40);	
	cout.fill('-');	
	cout << '-' << endl;
	
	for(i=0; i < 5; i++)
	{
		cout.width(5);	
		cout.fill(' ');	
		cout << DATA[i] << '\t';
		for(k=1; k <= DATA[i]; k++)
			cout << '*';
		cout << endl;
	}
}


