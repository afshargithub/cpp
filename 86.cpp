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
	int n = 5;
	bool done = false;
	for (int i = 0; i < n && !done; i++)
		if (i + 2 > n) 
			done = true;
		else 
			cout << i + 2 << " ";
}

