#include "complex.h"
#include <stdio.h>

complex::complex(){
	reelle = 1;
	imaginaire = 1;
}

complex::complex(int a, int b){
	reelle = a;
	imaginaire = b;

}

int complex::get_reelle(){
	return reelle;
}

//char complex::afficher(complex uncomplex){
	//printf("%d + i%d \n",uncomplex.get_reelle,uncomplex.get_imaginaire);
//}

