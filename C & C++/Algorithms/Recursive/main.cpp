#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void createArray(int rArray[],int RLenghtOfArray);
void createArray(int nArray[]);

int counter = 0;

int recursiveFactorial(int a){
    if(a==1)
        return 1;
    else
        return a * recursiveFactorial(a-1);
}

int BinarySearch(int a, int lenghtOfArray){ // (Number you search for, Lenght of array you want to create)
    int array[lenghtOfArray];
    counter ++;
    createArray(array, lenghtOfArray); //Creating random Array with randomArray function

    if(a == array[lenghtOfArray - 1]) {
        std::cout << "Founded in " << counter << ". attempt" << std::endl;
        return 11;
    }
    else if(lenghtOfArray == 0) {
        std::cout << "Sorry cant found " << std::endl;
        return 11;
    }
    else
        return BinarySearch(a,lenghtOfArray-1);
}

void BinarySearch(int a,int left, int right){// I overloaded randomArray Function just for fun;
    int array[100];
    createArray(array);


    int mid = (left + right)/2;

    if (a == array[mid])
        std::cout<<"It includes mid";
    else if(a < array[mid])
        BinarySearch(a,left, mid-1);
    else if(a> array[mid])
       BinarySearch(a,mid+1,right);
    else
        std::cout<<"It's not included";
}

void reverseString(char *ReCursed);

void hanoiTower();

//BinarySearch(30,0,100); // (The number we want to find in array, The starting of the array, The end of the array)

int main() {


    return 0;
}

void hanoiTower();

void reverseString(const char *ReCursed){
    if(*ReCursed) {
        reverseString(ReCursed + 1);
        std::cout << *ReCursed;
    }
}

void createArray(int rArray[],int RLenghtOfArray){
    srand (time(NULL));
    for(int i = 0; i<RLenghtOfArray;i++) {
        rArray[i] = rand() % 100 + 1;
    }
}

void createArray(int nArray[]){
    for(int i = 0; i<100;i++) {
        nArray[i] = i+i;
    }
}

