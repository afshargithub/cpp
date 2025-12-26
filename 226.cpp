/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
int main() {
	int a [6] = {0, 1, 2, 3, 4, 5};
	int *i = a + 3;
	*++i = 17;
	*i++ = 18;
	*i = 19;
	//*** display content of array a ***
	for(int k=0; k < 6; k++)
		cout << a[k] << " , ";
}
