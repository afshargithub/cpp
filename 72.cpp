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
	int ar[10] = {76, 58, 140, 64, 96 , 162, 80 , 47, 201, 87};
	int i, min_value, min_value_index = 0;
	min_value = ar[0];
	for (i=1; i < 10; i++)
		if (ar[i] < min_value)
		{
			min_value = ar[i];
			min_value_index = i;
		}
	cout << "Index of minimum value in array is : " << min_value_index;
}

