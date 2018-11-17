#include <stdio.h>

int main(){
	 
	int a,b,c,d,e;
	
	printf("Lutfen sayilari giriniz : ");
	scanf("%d %d %d %d", &a, &b, &d,&e);
	 
	c = a;
	a = b;
	b = c;
	
	c = d;
	d = e;
	e = c;
	
	printf("Rakamlarin yer degistirmis hali : %d %d %d %d" ,a,b,d,e);
	
	return 0;
}
