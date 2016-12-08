#include "complex.h"


complex::complex(){
	 int reelle = 1;
	 int imaginaire = 1;
}

complex::complex(int a, int b){
	reelle = a;
	imaginaire = b;

}

char afficher(complex uncomplex){
	printf("%d + i%d \n",uncomplex.get_reelle,uncomplex.get_imaginaire);
}

int complex::get_reelle(){
	return reelle;
}