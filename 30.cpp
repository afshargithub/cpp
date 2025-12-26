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
	int a[10] = {11}, k;
	k = 1;
	while (k < 10)
	{
		a[k] = a[0]; 
		k++;
	}
	
	//----display content of array----
	k = 0;
	while(k < 10)
	{
		cout << a[k] << endl;
		k++;
	}
}




