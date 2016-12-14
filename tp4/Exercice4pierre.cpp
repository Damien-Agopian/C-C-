#include <iostream>

using namespace std;

char* souschaine(char s[]){
	int i=0;
	while (s[i]!='/'){
		i++;
	}
	int a=0;
	int j=i+1;
	while(s[j]!='/'){
		s[a]=s[j];
		a++;
		j++;
	}
	s[j-i-1]='\0';
	return s;
}


int Nombredechance(char s[]){
	int a, b, nombre;            //calcul du JJ
	a=(s[0]-'0');
	b=(s[1]-'0');
	nombre=a+b; 
	
	a=0;                         //calcul du AAAA
	int i=0;
	while (s[i]!='\0'){
		i++;
	}
	i=i-1;
	int j=0;
	while (j<4){
		a=(s[i-j]-'0');
		j++;
		nombre=nombre+a;
	}
	
	
	char* mois=new char[20];                 //calcul du MM
	mois=souschaine(s);
	if (mois[0]=='J') a=1;
	if (mois[0]=='F') a=2;
	if (mois[0]=='M' && mois[2]=='r') a=3;
	if (mois[0]=='A' && mois[1]=='v') a=4;
	if (mois[0]=='M' && mois[2]=='i') a=5;
	if (mois[0]=='J' && mois[3]=='n') a=6;
	if (mois[0]=='J' && mois[3]=='l') a=7;
	if (mois[0]=='A' && mois[1]=='o') a=8;
	if (mois[0]=='S') a=9;
	if (mois[0]=='O') a=1;
	if (mois[0]=='N') {
		a=1;
		nombre++;
	}
	if (mois[0]=='D') {
		a=1;
		nombre=nombre+2;
	}
	nombre=nombre+a;
	
	
	if(nombre>10){
		a=nombre%10;
		b=nombre/10;
		nombre=a+b;
	}
			
	return nombre;
	
}


int main(){
	char* date=new char[25];
	cout << "Entrez votre date de naissance sous la forme JJ/Mois/AAAA" << endl;
	cin >> date;
	int x=Nombredechance(date);
	cout << "Votre nombre de chance est " << x << endl;
	return 0;
}

