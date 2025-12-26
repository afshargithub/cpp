/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

//---function definitions---
int CalcArea(int s1, int s2)
{
	int e;
	e = (s1 + s2) * 2;
	return e;
}

int main() {
	cout << "rec1 env = " << CalcArea(3, 8) << endl; //---function call---
	cout << "rec2 env = " << CalcArea(5, 3) << endl; //---function call---
}


