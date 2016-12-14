#include <stdio.h>
#include <string>
int chance(char date_de_naissance[]){
	int nombre_chance = date_de_naissance[0]-'0'
	nombre_chance += date_de_naissance[1]-'0'
	for(i=1; i<=4 ; ++i){
		nombre_chance += date_de_naissance[sizeof(date_de_naissance)/sizeof(date_de_naissance[0])-i]
	}
	
}	



int main(){
	
