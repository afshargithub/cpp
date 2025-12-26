/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define CellNo 10
int main()
{
	int ar[CellNo] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int *num;
	num = new int[CellNo / 2];
	for(int i=0, k=0; i < CellNo; i++, ++i, k++)
		*(num + k) = ar[i];
	for(int k=0; k < CellNo/2; k++)
		cout << num[k] << endl;	
	delete []num;
	return 0;
}

