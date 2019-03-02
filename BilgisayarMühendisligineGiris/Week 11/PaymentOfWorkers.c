#include <stdio.h>

// Iscilerin numaralarýný cinsiyetini ve maasini kullanicidan al 
// double = %ld

int number[10];
char gender[10];
double salary[10];
void getEmployee(),dispEmployee(),changeSalary(),showAll();

int main(){

getEmployee();
dispEmployee();
changeSalary();
showAll();

}

void getEmployee(){
	int i;	
	for (i=0;i<10;i++){	
	printf("Number [%d] \t Gender [%d] \t Salary [%d]\n",i+1,i+1,i+1);
	scanf("%d %c %ld",&number[i],&gender[i],&salary[i]);
	}		
}
void dispEmployee(){
	int ent_number;
	printf("Enter the number of your worker : ");
	scanf("%d",&ent_number);
	ent_number--;
    printf("Number = %d\nGender = %c\nSalary = %ld\n",number[ent_number],gender[ent_number],salary[ent_number]);
}
void changeSalary(){
	int i;
	int *pi;
	printf("Enter the number of your worker which you want to change his/him salary : ");
	scanf("%d",&i);
	printf("Enter the new salary for the %d. worker : ",i);
	i--;
	scanf("%ld",&*(salary+i));
}
void showAll(){
	int i;
	double sum=0;
	for (i=0;i<10;i++){
		printf("Number [%d] \t Gender [%d] \t Salary [%d]\n",i+1,i+1,i+1);
		printf("\t%d \t\t %c \t %ld\n",number[i],gender[i],salary[i]);
		sum += *(salary+i);
	}
	printf("Your total payment to workers is : %ld",sum);
}




