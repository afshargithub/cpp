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
	//n: first lower array index, m: second higher array index
	int n, m;
	float sum;
	float A[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
	        16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	
	//read n and validate and display error message if value is wrong
	cout << "Enter lower index : ";
	cin >> n;
	if(!(n >=0 && n < 29))
	{
		cout << "Error : index must be between [0 ... 29[";
		return 0;
	}
	
	//read m and validate and display error message if value is wrong
	cout << "Enter higher index : ";
	cin >> m;
	if(!(m > 0 && m < 30))
	{
		cout << "Error : index must be between ]0 ... 29]";
		return 0;
	}
	
	//validate n and m and display error message if sequence is wrong
	if (n > m)
	{
		cout << "Error : index sequence is wrong";
		return 0;
	}
	else if(n == m) //dispaly value of index m if m equal to n
	{
		cout << "Result = " << A[m] << endl;
	}
	else //calculate sum of array data between index n and m
	{
		sum = 0;
		for(int i=n; i <= m; i++)
			sum += A[i];
		cout << "Sum of data is : " << sum;
	}
}

