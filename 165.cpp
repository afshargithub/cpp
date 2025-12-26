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
int F1(int, int);
int F1(int, int, int);
//-----------------------------
int main(){
	int a;
	int x, y, z;
	cout << "This program sum 2 or 3 numbers. Which one, enter 2 or 3: ";
	cin >> a;
	switch(a)
	{
		case 2 :
		{
			cout << "Enter 2 Numbers:";
			cin >> x >> y;
			cout << F1(x, y) << endl;
		}
		break;
		case 3 :
		{
			cout << "Enter 3 Numbers:";
			cin >> x >> y >> z;
			cout << F1(x, y, z) << endl;
		}
		break;
		default:
			cout << "Error!...";
	}//switch
}//main
//-----------------------------
int F1(int p, int q){
	return p + q;
}
//-----------------------------
int F1(int p, int q, int r){
	return p + q + r;
}

