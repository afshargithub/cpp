/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
//x+(x-1)+(x-2)+(x-3)+...+3+2+1
#include <iostream>
using namespace std;
//--------------------------
int sigma(int x){
	unsigned int result = 0;
	for(; x >= 1; x--)
		result += x;
	return result;
}
//--------------------------
int main () {
	int m;
	cout << "enter a number : ";
	cin >> m;
	if(m > 0)
		cout << "sigma m = " << sigma(m);
	else
		cout << "ERROR, wrong input, try again ..." << endl;
	return 0;
}

