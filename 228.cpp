/*****************************************
example, written by Hamidreza Afsharrad
			  spring 2024
				     1403
			   good luck
			  best regards
*****************************************/
#include <iostream>
using namespace std;

struct ComplexNum{
	int real;
	int img;
};

int main(){
	struct ComplexNum *n1, *n2, *sum;
	//memory allocation , n1 struct pointer
	n1 = new struct ComplexNum;
	n1->real = 25;
	n1->img = 35;	
	//memory allocation , n2 struct pointer
	n2 = new struct ComplexNum;
	n2->real = 44;
	n2->img = 22;	
	//memory allocation , sum struct pointer
	sum = new struct ComplexNum;
	sum->real = n1->real + n2->real;
	sum->img = n1->img + n2->img;	
	cout << sum->real << " + " << sum->img << "j";
	//memory deallocation 
	delete n1;
	delete n2;
	delete sum;
	return 0;
}

