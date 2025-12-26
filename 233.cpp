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
	{
		//int *p=&44;//1 , ERROR
	}
	
	{
		char c='w';
		//char p=&c; //2 , ERROR
	}
	
	{
		int n;		//3 , correct
		int *p=&n;
	}
	
	{
		int n;
		//int **pn=&n; //4 , ERROR
	}
}
