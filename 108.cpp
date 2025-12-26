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
	char MyText[201], ch[2];
	int ch_counter = 0;
	
	//---read input text-----------------
	cout << "Enter Your Text : ";
	cin.getline(MyText, 201);

	//---read character to find----------
	cout << "Enter character for search : ";
	cin.getline(ch, 2);
	
	//---Search in array and count them---
	for(int i=0; MyText[i]!=0; i++)
		if(MyText[i] == ch[0])
			ch_counter++;
	
	//---display output---	
	cout << ch_counter << endl;
}

