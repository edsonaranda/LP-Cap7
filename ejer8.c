#include <stdio.h>
#include <stdlib.h>
	
int a;
	
int fun()
{
	a += 10;
	return a;
}
	
int main(int argc, char const *argv[])
{
	
	int b;
	a = 10;
	b = a + fun();
	printf("With the function call on the right, ");
	printf(" b is: %d\n", b);
	a = 10;
	b = fun() + a;
	printf("With the function call on the left, ");
	printf(" b is: %d\n", b);
	
	return 0;
	//El resultado es el mismo ya seea por la precedencia
	//Pero mas que todo por la re-declaracion de a=10
	//sino se acumularia el valor de a ya qes una variable global
}
	
