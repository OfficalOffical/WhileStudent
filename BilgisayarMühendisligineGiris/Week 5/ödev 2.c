#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,x,y;
	printf("Lutfen degerleri giriniz : ");
	scanf("%d %d %d", &a,&b,&c);
	
	x = (a*a) + (b*b) - sqrt((12-log(c)))/a;
	y = pow(c,2) + pow(b,2) + sqrt((12-log(a)))/c
	printf("%d %d", x, y);
	
	return 0;
}
