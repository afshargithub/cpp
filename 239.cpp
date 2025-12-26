/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

void update(int** ptr) {
    int val = 100;
    *ptr = &val;
}

int main() 
{
    int a = 5;
    int* p = &a;
    update(&p);
    cout << *p;
    return 0;
}

