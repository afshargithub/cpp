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
int f (int a) 
{ 
	return ++a; 
}
int f (unsigned int a) 
{ 
	return -a; 
}

int main()
{ 
	//---function call---
	cout << f (-5); 
}

