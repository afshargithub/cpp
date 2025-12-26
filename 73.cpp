/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;
#define NO_OF_STUDENTS 10
int main()
{
	string Names [NO_OF_STUDENTS];
	float  Scores[NO_OF_STUDENTS];
	int i, max_value, max_value_index = 0;

	for (i=0; i < NO_OF_STUDENTS; i++)
	{
		cout << "Please Enter Name student " << i+1 << " : ";
		cin >> Names[i];
		cout << "Please Enter Score student " << i+1 << " : ";
		cin >> Scores[i];
		cout << endl;
	}

	max_value = 0;
	for (i=0; i < NO_OF_STUDENTS; i++)
		if (Scores[i] > max_value)
		{
			max_value = Scores[i];
			max_value_index = i;
		}
	cout << "Top Studentd " << endl;
	cout << "Name  : " << Names[max_value_index] << endl;
	cout << "Score : " << Scores[max_value_index];
}

