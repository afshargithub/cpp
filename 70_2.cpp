/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ar[101];
	int i, len;
	cin.getline(ar, 100, '\n');
	len = strlen(ar);
	cout << endl << "output is : ";
	for(i=0; i < len; i++)
		cout << ar[len - 1 - i];
}

