/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include<iostream>
using namespace std;
int main(){
	//declaring array
	int array[5] = {-2, 45, 0, 11, -9} ;
	// Bubble Sort Starts Here
	int temp;
	for (int i2 = 0; i2 < 5; i2++)
		for (int j = 0; j < (5-1); j++)
			//Swapping element in if statement
			if (array[j]>array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
	// Displaying Sorted array
	cout << "  Sorted Array is: " << endl;
	for (int i3 = 0; i3 < 5; i3++)
		cout << "\t\t\tValue at " << i3 << " Index: " << array[i3] << endl;
	return 0;
}

