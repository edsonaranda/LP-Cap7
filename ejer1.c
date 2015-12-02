#include <stdio.h>

int fun(int *k) {
	*k += 4;
return 3 * (*k) - 1;
}

/*La prioridad  de ejecucion de funciones es de izquierda a derecha*/
int main(int argc, char const *argv[])
{
	//Suma los dos resultados de 5 y el resultado de fun
	//total 46
	int i = 10, j = 10, sum1, sum2;
	sum1 = (i / 2) + fun(&i);
	
	
	sum2 = fun(&j) + (j / 2);
	//Como el dato ingresas por referencia el valor final de j = 14 y 
	//luego al realizar fun: 41 + 14/2 = 48
	printf("sum %i\n",sum1);

	printf("sum2 %i\n",sum2);
	return 0;
}


