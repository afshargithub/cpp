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
    int a = 5;
    int* p = &a;
    int** q = &p;
    **q = 10;
    cout << a;
    return 0;
}

