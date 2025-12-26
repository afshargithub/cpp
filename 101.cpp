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
	int i = 4;
	switch (--i)
	{
		case 3:
			i += 5;
			if (i = 7)
			{
				i++;
				if (i == 9) 
					break;
				i *= 2;
			}
		case 4:
		case 5:
			i -= 4;
			break;
		case 8:
			i += 5;
			break;
	}
	//---display value of i ---
	cout << i;
}

