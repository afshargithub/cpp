/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

void foo(int& x) { x += 10; }
void bar(int* x) { *x += 5; }

int main() 
{
    int a = 10;
    void (*funcPtr)(int&) = foo;
    funcPtr(a);
    bar(&a);
    cout << a;
    return 0;
}

