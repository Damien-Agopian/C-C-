#include <iostream>

using namespace std;
bool palindrome(char mot[]){
	int j=sizeof(mot);
	for (int i=0; i< sizeof(mot); i++){
		if(mot[i] != mot[j]){
			return false;
		}
		j--;
		
		
	}
	return true ;
}

bool main(){
	char mot[255];
	cout << "Entrez le mot a tester : " << endl;
	cin >> palindrome(mot);
	return 0;

}