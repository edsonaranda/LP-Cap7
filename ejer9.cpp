#include <iostream>
#include <time.h>
#define limite 800000000
	
using namespace std;
	
int main() 
{
	
	time_t inicio, fin;
	inicio = time(NULL);
	int rpt1 = 0;
	for(int i=0; i<limite; ++i)
		rpt1 += i;
		fin = time(NULL);
	
	cout<<"DAtos INT tarda: "<<(double)difftime(fin,inicio)<<endl;
	
	inicio = time(NULL);
	double rpt2 = 0;
	for(int i=0; i<limite; ++i)
		rpt2 += i;
		fin = time(NULL);
	
	cout<<"Datos DOUBLE tarda: "<<(double)difftime(fin,inicio)<<endl;
	
	return 0;
	//PAra un tamño de 800 millones se INt demora 2
	//En cambio para los double demora 4
	
}
	
	
