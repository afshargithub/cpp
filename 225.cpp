/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
void f1 (const int * xptr)
{ *xptr = 100;}
int main() {
    int x, y;
    int * const ptr = &x;
    f1(&y); *ptr = 7;
    ptr = &y;
    return 0;
}

