/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
//-------------------------
void swap(int*& a, int*& b) {
    int* temp = a;
    a = b;
    b = temp;
}
//-------------------------
int main() {
    int x = 5, y = 10;
    int* p1 = &x;
    int* p2 = &y;

    swap(p1, p2);
    cout << *p1 << " " << *p2;
    return 0;
}

