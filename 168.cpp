/*****************************************
example, written by Hamidreza Afsharrad
			  summer 2025
				     1404
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
//-----------------------------
int SWAP3(int &m, int &n, int &k)
{
	int temp = m;
	m = n;
	n = k;
	k = temp;
	
	return m + n + k;
}
//-----------------------------
int main () {
   int n, m, k, c;
      
   m = 162;
   n = 362;
   k = 762;
   cout << m << endl << n << endl << k << endl;
   cout << "-------------------" << endl;
   c = SWAP3(m, n, k); 
   cout << m << endl << n << endl << k << endl;
   return 0;
}

