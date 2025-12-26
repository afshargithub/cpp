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
	string FName;	    cin >> FName;
	int age;		    cin >> age;
	string CityName;	cin >> CityName;
	if (FName == "ALI")
		if(age >= 20)
			if (age <= 30)
				if (CityName == "TEHRAN" )
					cout << "it's OK...'" << endl;
	else 
		cout << "it's not OK...'" << endl;
}

