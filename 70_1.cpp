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
	string s;
	cin >> s;
	int i;
	cout << endl << "output is : ";
	for(i=0; i < s.length(); i++)
		cout << s[s.length() - 1 - i];
}

