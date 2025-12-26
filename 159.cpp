/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
function overloading , linear search
*****************************************/
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
void LinearSearch(int arr[], int value, int n)
{
	int found = 0, i;
	for (i = 0; i < n; i++)
		if (value == arr[i])
		{
			found = 1;
			break;
		}

	if (found == 1)
		cout << "number Element is present in the array at position   " << i + 1 << endl;
	else
		cout << "number `Element is not present in the array." << endl;
}
//---------------------------------------------------------------------------
void LinearSearch(char arr[], char value, int n)
{
	int found = 0, i;
	for (i = 0; i < n; i++)
		if (value == arr[i])
		{
			found = 1;
			break;
		}

	if (found == 1)
		cout << "character Element is present in the array at position   " << i + 1 << endl;
	else
		cout << "character Element is not present in the array." << endl;
}
//---------------------------------------------------------------------------
void LinearSearch(string arr[], string value, int n)
{
	int found = 0, i;
	for (i = 0; i < n; i++)
		if (value == arr[i])
		{
			found = 1;
			break;
		}

	if (found == 1)
		cout << "word Element is present in the array at position   " << i + 1 << endl;
	else
		cout << "word Element is not present in the array." << endl;
}
//---------------------------------------------------------------------------
int main()
{
	const int num=10;
	int i, int_token, found = 0;
	int    int_array[10];
	char   char_token, 
		   char_array[10]={'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
	string string_token, 
		   string_array[10]={"apple", "system", "red", "orange", "mouse", "wall", "chair", "desk", "car", "cycling"};
	cout << "Enter 10 numbers to save into array one by one : ";
	for (i = 0; i < num; i++)
		cin >> int_array[i];
		
	cout << "Enter a number for search : ";
	cin >> int_token;
	cout << "Enter a character for search : ";
	cin >> char_token;
	cout << "Enter a word for search : ";
	cin >> string_token;
	//Linear search
	cout << endl << endl;
	LinearSearch(int_array, int_token, num);
	LinearSearch(char_array, char_token, num);
	LinearSearch(string_array, string_token, num);
	return 0;
}

