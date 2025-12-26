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
	for (i = 0; i < 5; i++)
	{
		if (i == 3) 
			break;
	}
	for ( ;  ; )
	{
		i += 2;
		if (i <= 5) 
			continue;
		
		i += 3;
		cout << i << " ";
		
		if (i > 10) 
			break;
	}	
}
