/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

//---function definitions---
void ReadData()
{
	int num;
	do{
		cout << "enter a number : ";
		cin >> num;
		if(!num)
			break;
		else if(num < 0)
			continue;
		cout << "result = " << num+1 << endl;
	}while(true);
}

int main() 
{
	//---function call---
	ReadData();
}

