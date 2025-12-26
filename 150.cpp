/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

string NumToStringTextConvert(int num)
{
	string wstr;
	switch(num)
	{
		case 0: wstr = "zero";   break;
		case 1: wstr = "yek";    break;
		case 2: wstr = "dow";    break;
		case 3: wstr = "se";     break;
		case 4: wstr = "chahar"; break;
		case 5: wstr = "panj";   break;
		case 6: wstr = "shesh";  break;
		case 7: wstr = "haft";   break;
		case 8: wstr = "hasht";  break;
		case 9: wstr = "noh";    break;
		default:wstr = "";
	}
	return wstr;
}//function
int main()
{
	cout << NumToStringTextConvert(9) << endl;
	cout << NumToStringTextConvert(4) << endl;
	cout << NumToStringTextConvert(0) << endl;
	cout << NumToStringTextConvert(11) << endl;
}
