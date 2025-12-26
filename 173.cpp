/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
//----------------------------
void func(int& x, int y) {
    x = x + y;
    y = x - y;
}
//----------------------------
int main() {
    int a = 5, b = 10;
    func(a, b);
    cout << a << " " << b;
    return 0;
}

