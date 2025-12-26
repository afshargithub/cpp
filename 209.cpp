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
    int arr[] = {11, 22, 33, 44, 55};
    int* p1 = arr;
    int* p2 = arr + 3;

    cout << p2 - p1 << " , ";
    cout << *p2 - *p1;
    return 0;
}

