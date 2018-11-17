#include <stdio.h>
#include <math.h>

int main(){	

}

void odev1(){
	
	int a,b,c,d;
	
	printf("Lutfen degerlerinizi giriniz : ");
	scanf("%d %d %d", &a,&b,&c);
	
	
	
	if((a >= b) || (b < c))
	 d=1;
	
	else if((a*a) == 4 && sqrt(b) < log2(a+c)  )
	 d=1;
	else
     d=0;
     
     
     
     
	printf("%d", d);
	
}

void odev2(){
	char a,b;		
 printf("Lutfen degerleri giriniz : ");
 scanf("%c %c", &a,&b );
 
 int A,B;
 
 A = a;
 B = b;
 	 
 if (A > B)
 	printf(" Ilk girdiginiz deger buyuktur");
 else 	 
 	printf(" Ikinci girdiginiz deger buyuktur");
	  
 printf("\n Sayilariniz %d / %d", A, B)	 ;	
	
}
