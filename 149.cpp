/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

void ShowMessage(string msg, int msg_type)
{
	switch(msg_type)
	{	
		case 1:
			cout << "Info : " + msg << endl;
			break;
		case 2:
			cout << "Warning : " + msg << endl;
			break;
		case 3:
			cout << "Danger : " + msg << endl;
			break;
	}//switch
}//function

int main()
{
	ShowMessage("wrong number!", 1);
	ShowMessage("date/time is incorrect!", 2);
	ShowMessage("try again, email format...!!", 3);
}

