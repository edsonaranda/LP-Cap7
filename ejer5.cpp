#include <iostream>
	
using namespace std;
	
int fun1(int k)
{
	return 3 * k + 2;
}
int fun2(int k)
{
	return 2 + 3 * k;
}
	
int main()
{
	int a = 5;
	int sum1 = fun1(a) + fun2(a);
	cout<<"Sum1=fun(a) + fun2(a) = "<<sum1<<endl;
	
	
	sum1 = fun2(a) + fun1(a);
	cout<<"Sum1 = fun2(a) + fun1(a)= "<<sum1<<endl;
	//evalua de izquierda a derecha y la precedencia de la * es siempre mayor
	//por ello tiene los mismos resultados

	int b = a + fun1(a);
	cout<<"valor de a + fun1(a) es: "<<b<<endl;
	b = fun1(a) + a;
	cout<<"valor de fun1(a) + b es: "<<b<<endl;
	//No importa la posicion de la funcion el resulrado es el mismo
	return 0;
}
	
