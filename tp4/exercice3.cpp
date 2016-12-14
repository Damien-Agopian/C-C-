#include <iostream>

using namespace std;

char* reverse_ch(char mot[]){
	char cinqieme=mot[4];
	char quatrieme=mot[3];
		int a=4;
		for (int i=0 ; i<= 4; ++i){
		mot[a]=mot[i];
		--a;
	}
	mot[0]=cinqieme;
	mot[1]=quatrieme;
	return mot;
}

int main(){
	char mot[5];
	cout << "Entrez le mot a inverser"<< endl;
	cin >> mot;
	cout <<"Le mot inverse est : " << reverse_ch(mot)<< endl;
	return 0;
}
