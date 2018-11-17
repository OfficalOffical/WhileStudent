 #include <stdio.h>
 
 int main(){
 	int bald_eagle_sight;
 	int sum = 0;
 	int a = 1;
 	
 	while (a <= 12){
 		do{
	
	 		scanf("%d", &bald_eagle_sight);	
 			sum += bald_eagle_sight; 	
			 		
	       }while(bald_eagle_sight != 0);
 		
 			printf("%d. Month bald eagle sight's number is : %d \n",a,sum);
 			sum=0;
 			a++;		
 			
	    }	
 	}
