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
	int n, *z;
	int * const y = &n;
	int **p, ***q;
	
	q = &p;//1 : correct
	z = &n;//2 : correct
	//y++;//3 : ERROR
	p=&z;//4 : correct
}
