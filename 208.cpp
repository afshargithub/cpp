/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int* ptr = &a;
    int& ref = a;

    ptr = &b;    // Line 1
    ref = b;     // Line 2

    cout << a << " , " << *ptr << " , " << ref;
    return 0;
}

