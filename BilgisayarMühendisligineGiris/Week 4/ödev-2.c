#include <stdio.h>

int main (){
	int a,b;
	int sayac1 = 1;
	int sayac2 = 1;
	
	printf("Basamagini hesaplamak istediginiz sayilari giriniz : ");
	scanf("%d %d", &a,&b);
	
	for (;a >= 10; a = a/10 ){
		sayac1 ++;
	}
	for (;b >= 10; b = b/10 ){
		sayac2 ++;
	}
	
	printf("Ilk girdiðiniz sayi : %d", sayac1);
	
	printf(" Ikinci girdiðiniz sayi : %d", sayac2);
	
	return 0;
	
}
