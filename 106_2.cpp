/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
#include <cstdlib>
#include <time.h> 
using namespace std;

int main()
{
	srand(time(0));
	
	int r = rand() / 100 % 36;
	cout << r;
}

