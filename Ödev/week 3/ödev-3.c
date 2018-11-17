#include <stdio.h>


int main (){
	int uzunkenar, kisakenar, cevre, alan;
	
	printf("Uzun kenari giriniz : ");
	scanf("%d", &uzunkenar);
	printf("Kisa kenari giriniz : ");
	scanf("%d", &kisakenar);
	 cevre = uzunkenar + uzunkenar + kisakenar + kisakenar;
	 alan  = kisakenar*uzunkenar;
	printf("Dikdortgenin cevresi : %d", cevre);
	printf(" Dikdortgenin alani : %d" ,alan);
	
	return 0;
}
