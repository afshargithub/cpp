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
	int  ch_indices[200]={0};
	int  ch_counter = 0;
	
	//---read input text-----------------
	cout << "Enter Your Text : ";
	cin.getline(MyText, 201);

	//---read character to find----------
	cout << "Enter character for search : ";
	cin.getline(ch, 2);
	
	/* Search in array, count and put 
	   indices in output array */
	for(int i=0; MyText[i]!=0; i++)
		if(MyText[i] == ch[0])
		{
			ch_indices[ch_counter] = i+1;
			ch_counter++;
		}
		
	/* There are some indices, diaplay 
	   them according to output format*/
	if(ch_counter != 0)
	{
		cout << "index: ";
		for(int i=0; i < ch_counter; i++)
			cout << ch_indices[i]-1 << ", ";
	}
	else
		cout << "index: - ,";
	cout << "count: " << ch_counter << endl;
}

