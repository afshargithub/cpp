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
	char s[] = {'a', 'b', 'c', 'd', 0};
	for (char *p = s; *p; p = p + 2)
		cout << *p;
}

