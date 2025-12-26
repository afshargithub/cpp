/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
binary search
*****************************************/
#include <iostream>
#define MAX_SIZE 10
using namespace std;
void binary_search(int[], int, int);
//----------------------------------------------------
int main() {
	int arr_search[MAX_SIZE], i, element;
	cout << "Enter " << MAX_SIZE << " Elements for Searching : " << endl;
	for (i = 0; i < MAX_SIZE; i++)
		cin >> arr_search[i];
	cout << "Your Data   :";
	for (i = 0; i < MAX_SIZE; i++) 
		cout << "\t" << arr_search[i];
	cout << endl << endl << "Enter Element to Search : ";
	cin >> element;
	binary_search(arr_search, element, MAX_SIZE);	
}
//----------------------------------------------------
void binary_search(int fn_arr[], int element, int size) 
{
	int f = 0, mid;
	while (f <= size) 
	{
		mid = (f + size) / 2;
		if (fn_arr[mid] == element) 
		{
			cout << "Search Element  : " << element << " : Found :  Position : " << mid + 1 << '.' << endl;
			break;
		}
		else if (fn_arr[mid] < element)
			f = mid + 1;
		else
			size = mid - 1;
	}
	if (f > size)
		cout << "Search Element : " << element << "  : Not Found" << endl;
}
