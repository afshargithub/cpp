/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
//---function definition---
int func (int x)
{
	int k = x;
	switch (x + 2)
	{
		case 0  :
		case 3  : k += x;
		case 5  :
		case 10 : k *= --x;
		default : k -= 4;
	}
	return k;
}
//-------------------------
int main()
{
	//---function call---
	cout << func(1);
}

