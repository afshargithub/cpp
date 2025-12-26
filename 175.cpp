/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
//------------------------
int& func() {
    int x = 42;
    /* undefined behavior :
       Returns a reference to a local variable */
    return x; 
}
//------------------------
int main() {
    int& ref = func();
    cout << ref;
    return 0;
}

