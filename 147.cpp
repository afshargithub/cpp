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
void MyFunction(int loopNo)
{
	for (int m=0; m < loopNo; m++)
		cout << "m";
	cout << endl;
}

int main() 
{
	//---function call--------
	MyFunction(50);
	MyFunction(6);
	MyFunction(1);
	MyFunction(3);
}

