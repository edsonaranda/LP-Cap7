using System;


class Program
{hola
    //definimos ref como paso de pareametros x referencia
    static int fun(ref int k) {
        k += 4;
        return 3 * k - 1;
    }


    static void Main()
    {
	//definimos "ref i" para decir que estamos evaluenado la misma variable
        int i = 10, j = 10, sum1, sum2;
        sum1 = (i / 2) + fun(ref i);
        sum2 = fun(ref j) + (j / 2);
	//nos da 41
        System.Console.WriteLine("sum1: {0}", sum1);
        //nos da 46
        System.Console.WriteLine("sum2: {0}", sum2);
        
    }
}
