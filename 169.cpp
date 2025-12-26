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
void inc(int &param){
	param += 10;
}
//-----------------------------
int main () {
	int m;
	for (m=0; m < 162; inc(m))
		cout << m << endl;
	return 0;
}

