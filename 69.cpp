/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
int main()
{
	int i, n;
	float SUM;
	cin >> n;
	for(i=2; i <= n; i++)
		SUM += 1.0 / i;
	cout << SUM;
}

