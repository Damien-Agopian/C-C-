#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int chance(char date_de_naissance[]){
	int nombre_chance = date_de_naissance[0]-'0';
	
	cout << nombre_chance << endl;

	nombre_chance += date_de_naissance[1]-'0';
	
	cout << nombre_chance << endl;

	int taille_mot = 0;
	int c = '1';
	while(c != '\0'){  //On determine la taille de la chaine
		c = date_de_naissance[taille_mot];
		taille_mot++;
	}
	for(int i = taille_mot-1 ; i> taille_mot-6 ; i--){
		cout << date_de_naissance[i] << "  " << nombre_chance << endl;
		nombre_chance += date_de_naissance[i];
	}


	//for(i=1; i<=4 ; ++i){
		//nombre_chance += date_de_naissance[sizeof(date_de_naissance)/sizeof(date_de_naissance[0])-i];
	//}
	return nombre_chance;
}	



int main(){
	int r = chance("31-Decembre-1996");
	cout << r << endl;
	//printf("%d\n",r);
}
	
