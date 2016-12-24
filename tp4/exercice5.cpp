#include <iostream>

using namespace std;
bool palindrome(char mot[]){
	int taille_mot = 0;
	char compteur = '1';
	while(compteur != '\0'){  //On determine la taille de la chaine
		compteur = mot[taille_mot];
		taille_mot++;
	}
	cout <<"la taille du mot est: " << taille_mot-1 <<endl;
	int j = taille_mot -2;
	for (int i = 0; i < taille_mot; i++){
		//On parcours la chaine de chaques coté

		//(debugage) cout << "i = " << i << " et j = "<< j << endl;
		if(mot[i] != mot[j]){
			return false;
		}
		j--;
		
		
	}
	return true ;
}

int main(){
	char mot[255];
	cout << "Entrez le mot a tester : " << endl;
	
	cin >> mot;
	if(palindrome(mot) ==true){
		cout << mot << " est bien un palindrome" << endl;

	}
	else{
		cout << mot << " n'est pas un palindrome" << endl;
	}
	return 0;

}