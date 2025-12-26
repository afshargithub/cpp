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
	char ch;
	string str="";//empty string definition
	const int str_len=100;
	int count=0;
	
	cout << "Enter text until reach to 'Q' or 'q' then display all text" << endl;
	do{
		cin >> ch;
		count++;
		
		if (ch!='q' && ch!='Q' && count<=str_len)
			str += ch;
		else
			break;
	}while(true);
	
	if (str == "")
		cout << endl << "nothing";
	else
		cout << endl << str;
}

