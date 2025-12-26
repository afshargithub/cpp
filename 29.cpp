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
	int num;
	for (num=1; num < 10; num++)
	{
		cout << "book" << endl;
		if (num < 2 || num > 6)
			continue;
		cout << "Red" << endl;
	}
}

