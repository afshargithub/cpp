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
void F1(int a, int b=2){
	cout << a + b << endl;
}
//-----------------------------
void F2(float p, float q=3.14){
	cout << p + q << endl;
}
//-----------------------------
int main(){
	F1(3);
	F2(1);
	F1(3, 4);
	F2(1, 5.55);
}

