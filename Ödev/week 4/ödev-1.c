#include <stdio.h>

int main () {
	int a;
	
	printf("Sayinizi giriniz : ");
	scanf("%d", &a);
	
	if (a%2 == 0){	
	printf("Sayiniz cifttir");
	}
	
	else {	
	printf("Sayiniz tektir");
	} 
	
	return 0;
}
