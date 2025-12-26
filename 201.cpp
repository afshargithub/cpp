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
	int a, *ptr;
	cout << "enter a number : ";
	cin >> a;
	ptr = &a;  
	cout << *ptr + 1;
}

