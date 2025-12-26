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
int fact(int num)
{
	int i, result;
	for(result=1; num >= 1; num--)	
		result *= num;
	return result;
}

int main() 
{
	//---function call---
	cout << "fact  4 = " << fact(4)  << endl; 
	cout << "fact  1 = " << fact(1)  << endl; 
	cout << "fact -7 = " << fact(0) << endl; 
}

