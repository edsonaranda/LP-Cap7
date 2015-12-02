#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = 3, c=4;

	cout<< a + b + c <<endl; 
	cout<< c + b + a <<endl; //La precedencia es igual
	

	cout<< a * b + c <<endl;
	cout<< a + b * c <<endl; //la multipliacion tiene mayor precendecia ya sea suma o resta
	
	cout<< a / b * c <<endl;
	cout<< a * b / c <<endl;//multiplicacion y division tienen la misma precediencia
	

	cout<< (a < b > c )<<endl;
	cout<< (a > b < c )<<endl; //los operadores se evaluan de izquierda a derecha
	
	return 0;
}
