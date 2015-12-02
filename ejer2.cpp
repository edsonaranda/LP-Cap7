#include <iostream>
#include <stdio.h>

using namespace std;


int fun(int *k)
{
	*k += 4;
	return 3 * (*k) - 1;
}

/*la precedencia de funciones y opreadores se da en izquierda a derecha*/


int main()
{
	int i = 10, j = 10, sum1, sum2;
	sum1 = (i / 2) + fun(&i);
	
	sum2 = fun(&j) + (j / 2);
		printf("sum2 %i\n",sum2);
	return 0;
}


