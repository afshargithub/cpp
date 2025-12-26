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
		int a=12, &x=a;//1 , correct
	}
	{
		int a, *x=&a;//2 , correct
	}
	{
		int a, &x=a;//3 , correct
	}
	{
		//int &x=12;//4 , ERROR: alias definition
	}
}
