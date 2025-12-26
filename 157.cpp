/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

int GetSum(int numList[], int count)
{
	int result=0;
	for(int i=0; i < count; i++)
		result += numList[i];
	return result;
}//function
int main()
{
	int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int NumArray[50]={11,22,33,44,55,66,77,88,99,110,
					  11,22,33,44,55,66,77,88,99,110,
					  11,22,33,44,55,66,77,88,99,110,
					  11,22,33,44,55,66,77,88,99,110,
					  11,22,33,44,55,66,77,88,99,110};
	cout << GetSum(a, 10) << endl;
	cout << GetSum(NumArray, 50) << endl;	
}
