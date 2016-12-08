#include "complex.h"


complex::complex(){
	 reelle = 1;
	 imaginaire = 1;
}

complex::complex(int a, int b){
	reelle = a
	imaginaire = b

}

char afficher(complex uncomplex){
	printf("%d + i%d \n",reelle,imaginaire);
}