#include <stdio.h>
#include <math.h>

int main (){
	
	int a, b ,c, sum, sum2;
	
	printf("Lutfen degerleri girinis : ");
	scanf("%d %d %d"  ,&a,&b,&c);
	
	sum = (b*b)*c/(3-a);
	
	printf("ilk isleminizin sonucu : %d", sum);
	
	sum2 = (c*c*c)- log(b) + (a*a) / b;
	printf("\nikinci isleminizin sonucu : %d", sum2);
		
	
	return 0;
}
