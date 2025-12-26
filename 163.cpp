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
int DIV(int, int);
float DIV(float, float);
//-----------------------------
int main(){
	int a1, a2;
	float m1, m2;
	a1 = 9;
	a2 = 4;
	m1 = 9;
	m2 = 4;
	cout << DIV(a1, a2) << endl;
	cout << DIV(m1, m2) << endl;
}
//-----------------------------
int DIV(int p, int q){
	return p / q;
}
//-----------------------------
float DIV(float p, float q){
	return p / q;
}

