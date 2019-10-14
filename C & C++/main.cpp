#include <iostream>

int factorialFunction(long long int factorial);


int main() {

    return 0;
}

int factorialFunction(long long int factorial){
    if (factorial<=1)
        return 1;
    else
        return factorial*factorialFunction(factorial-1);
}