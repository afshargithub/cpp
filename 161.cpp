/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
void F1(int);
void F1(float);
int main(){
	int a=23;
	F1(a);
}
void F1(float p){
	p--;
	cout << p << endl;
}
void F1(int p){
	p++;
	cout << p << endl;
}

