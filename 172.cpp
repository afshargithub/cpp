/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
#include<iostream>
using namespace std;
//----------------------------
struct Square{
int length, width;
};
//----------------------------
int MySquareArea (struct Square m ){
	//what's the program code ???
	return m.length * m.width;
}
//----------------------------
int main(){
	struct Square  S;
	S.width = 2;
	S.length = 5;
	cout << MySquareArea(S);
	return 0;
}

