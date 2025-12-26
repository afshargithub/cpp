/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
int main() {
	int s = 27;
	switch (s % 10)
	{
		case 10:
		case 9: cout << "NI";
		case 8: cout << "EI";
		case 7: cout << "SE";
		case 6: cout << "SS";
		case 5:
		case 4:
		case 3:
		case 2: cout << "TW";
	}
	return 0;
}

