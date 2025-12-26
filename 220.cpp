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
	int num[10] = {11, 22, 33, 44, 55, 66, 77}, num1, num2;
	int *p, *q, temp;	
	p = num + 1;
	q = p + 4;
	temp = q - p;
	cout << *p << " , " << *q << " , " << temp << endl;	
	return 0;
}

