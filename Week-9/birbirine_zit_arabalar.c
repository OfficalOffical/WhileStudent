#include <stdio.h>

int araba1_hiz, araba2_hiz;
float mesafe,speed;

float calcDistance(float speed); // defined 

int main(){
	// x = v.t
	deger_alim();
	printf("%f saatte carpisirler", calcDistance(speed));
}

void deger_alim(){ // verileri son kullanýcýdan alma 
	printf("Lutfen 1. arabanin hizini giriniz : ");
	scanf("%d",&araba1_hiz);
	printf("Lutfen 2. arabanin hizini giriniz : ");
	scanf("%d",&araba2_hiz);
	printf("Lutfen iki araba arasindaki mesafeyi km cinsinden giriniz : ");
	scanf("%f",&mesafe);
}

float calcDistance(float speed){ // hesap kitap aþamasý 
	speed = mesafe/(araba1_hiz + araba2_hiz)  ;
	return speed;
}


