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
	int i, digits[11]={0};
	string wstr="";
	if(num < 0)
	{
		wstr = "manfiye ";
		num = -num;
	}
	
	digits[0] = num % 10;
	i = 1;
	while(num/10 != 0)
	{
		num /= 10;
		digits[i] = num % 10;
		i++;
	}
	digits[i] = -1; //end of digits
	for(i--; i >= 0; i--)
		cout << digits[i] << " , ";
	cout << endl;
return "0"	;
		
		
		
		
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
	cout << endl;
	return wstr;
}//function
int main()
{
	NumToStringTextConvert(9);
	NumToStringTextConvert(29);
	NumToStringTextConvert(561);
	NumToStringTextConvert(1234);
	NumToStringTextConvert(29546);
	NumToStringTextConvert(561288);
	NumToStringTextConvert(9198001);
	NumToStringTextConvert(29000000);
	NumToStringTextConvert(561567123);
	NumToStringTextConvert(1561567123);
	
//	cout << NumToStringTextConvert(9) << endl;
//	cout << NumToStringTextConvert(4) << endl;
//	cout << NumToStringTextConvert(0) << endl;
//	cout << NumToStringTextConvert(11) << endl;
}
