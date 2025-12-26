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
    int a = 10;
    const int* ptr1 = &a;    	// Line 1
    int* const ptr2 = &a;    	// Line 2
    const int* const ptr3 = &a; // Line 3

    *ptr1 = 20; 	// Line 4
    ptr2 = nullptr; // Line 5
    *ptr3 = 30; 	// Line 6
}

