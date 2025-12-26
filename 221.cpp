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
	p = num;
	for (p=num; p < num + 9; p+=2)
  cout << *(p+1) << endl;
	return 0;
}

