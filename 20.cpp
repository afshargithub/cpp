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
	int num, counter=0;
	float avg, sum=0;
	cout << "enter a number:"; //-1 : exit the program
	cin >> num;
	while (num != -1)
	{
		sum += num;
		++counter;
		
		cout << "enter a number:"; //-1 : exit the program
		cin >> num;
	} //while
	if (counter != 0)
	{
		avg = sum / counter;
		cout << "average is " << avg;
	}
	else
		cout << "no entered";
	return 0;
}


