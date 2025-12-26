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
	string MyText, ch;
	int ch_counter=0, search_offset=0;
	unsigned int find_result;
	
	//---read input text-----------------
	cout << "Enter Your Text : ";
	getline(cin, MyText);

	//---read text to find----------
	cout << "Enter character for search : ";
	getline(cin, ch);
	
	//---Search text in array and count them---	
	while(true)
	{
		find_result = MyText.find(ch, search_offset);
		if (find_result != UINT_MAX)
		{
			ch_counter++;
			search_offset += find_result+1;
		}
		else
			break;
	}
	
	//---display output---	
	cout << ch_counter << endl;
}

