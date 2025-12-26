/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

void func(int*& p) {
    int x = 10;
    p = &x;
}

int main() {
    int* ptr = NULL;
    func(ptr);
    cout << *ptr << endl;
    return 0;
}

