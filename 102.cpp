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
	char ch;
	for (i = 0, ch = 'a'; 1; i++, ch += i)
	{
		if (ch > 'w') 
			break;
		
		if ((i + 1) % 2) 
			continue;
		else 
			cout << ch;
		
		ch -= 2;
	}
}

