#include <stdio.h>

int main(){
	int i;
	int a;
	int cift = 0;
	int tek = 0;
	
	for(i = 0; i < 10; ++i){
		
		scanf("%d", &a);
		
		if(a%2 == 0){
			
		cift++;
		
		}
		
		else{
		tek++;
		}
	}
	
	printf("Girdiginiz cift sayilarin sayisi : % d\nGirdiginiz tek sayilarin sayisi : %d", cift,tek);
	
}


void faktoriel_alma(){

	int a,b,faktoriel;
	
	scanf("%d", &b);
	

	
	
	
	for (a=1;a < b; a++)
	{
		faktoriel *= a;
	}
	printf("%d", faktoriel);
	
}
