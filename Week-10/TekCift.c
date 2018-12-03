#include <stdio.h>

int i,j,findPrime(),findOdd(),findEven();
int  rastgele[10] = {12,3,16,7,8,6,18,15,17,19};

int main(){
	findPrime();
	printf("---------------------------------- \n");
	findOdd();
	printf("---------------------------------- \n");
	findEven();
	
}

int findPrime(){
	
	for(j=0;j<10;j++)
	{
	for(i=2;i<rastgele[j];i++){
	
	if(rastgele[j]%i==0)
        printf("%d\n",rastgele[j]);
		break; 
    }		 		
  }	
}

int findOdd(){
	
	for(j=0;j<10;j++)
	{
	for(i=0;i<rastgele[j];i++){
	
	if(rastgele[j]%2!=0)
        printf("%d\n",rastgele[j]);
		break; 
    }		 		
  }	
}
int findEven(){
	
	for(j=0;j<10;j++)
	{
	for(i=0;i<rastgele[j];i++){
	
	if(rastgele[j]%2==0)
        printf("%d\n",rastgele[j]);
		break; 
    }		 		
  }	
}


