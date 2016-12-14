#include <stdio.h>

void minmax(int x, int y, int &min, int &max){
		
		if(x>y){
			min=y;
			max=x;
		}
		else {
			max=y;
			min=x;
		}
}

int main(){
	int x;
	int y;
	int min;
	int max;
	
	
	printf("Entrez deux entier :x/y \n");
	scanf("%d,%d",&x,&y);
	
	minmax(x,y,min,max);
	printf("Le plus grand des deux est %d \n",max);
	return 0;
}
	
