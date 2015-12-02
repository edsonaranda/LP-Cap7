#include <iostream>
	
using namespace std;
	
int f1()
{
	
	cout<<"Se ejecuto fun 1"<<endl;
	return 10;
}
	
int f2()
{
	
	cout<<"ejecutando fun 2"<<endl;
	return 30;
}
	
int f3(int a, int b)
{
	
	cout<<"ejecutando fun 3"<<endl;
	return a - b;
}
	
int main()
{
	
	cout<< f3( f1(),f2() );
	//iprime primero f1
	//Imprime luego f2 y calual elresultado en f3
	//El resultado es 20 pero se evaulo de derecha a izquierda
	return 0;
}
	
