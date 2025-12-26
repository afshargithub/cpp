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
	//----- array and variable declaration -----
	int k[51], i;
	//----- initialize array -----
	for(i=0; i < 51; i++)
		k[i] = i;
	//----- original source code -----
	i = 2;
	while (k[i] < 20) 
	{
		k[i] = k[i - 1] * 3;
		i++;
	}
	
	cout << i;
}

