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
	int n = 44;
	int *p = &n;
	int * const cp = &n;
	const int k = 88;
	const int *pc = &k;
	const int * const cpc = &k;
	++p; //1
	//++(*cpc); //2 , error
	++(*cp); //3
	++pc; //4
}
