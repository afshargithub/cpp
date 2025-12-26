/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define NO_OF_ARRAY_CELLS 20
int main()
{
	int i, j;
	float DATA[NO_OF_ARRAY_CELLS] = 
          {10, 8, 4, 5, 9, 1, 11, 12, 21, 13,
           3, 2, 6, 17, 14, 16, 15, 23, 20, 30};

	j = NO_OF_ARRAY_CELLS - 1;

	for(i=0; i < NO_OF_ARRAY_CELLS / 2; i++, j--)
		cout << DATA[i] + DATA[j] << endl;
}


