/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
//-----------------------------
int fact(int x){
	unsigned int result = 1;
	for(; x > 1; x--)
		result *= x;
	return result;
}
//-----------------------------
int main () {
	int m;
	cout << "enter a number : ";
	cin >> m;
	if(m > 0)
		cout << "factorial m = " << fact(m);
	else
		cout << "ERROR, wrong input, try again ..." << endl;
	return 0;
}

