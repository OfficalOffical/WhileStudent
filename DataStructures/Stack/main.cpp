#include "main.h"

int main() {
    return 0;
}

Stack::Stack(){
    cout<<"The stack is being created"<<endl;
    cout<<"//////////////////////////"<<endl;
    top = -1;
    for(int i = 0;i < TheSize;i++){
      stack[i] = 0;
    }
}

Stack::~Stack(){
    cout << "\n//////////////////////////" << endl;
    cout << "The stack is being destroyed"<<endl;
}

int Stack::push(int i){
    top++;
    stack[top]= i;
    return top;
}

void Stack::info(){
     for(int i = 0;i <= top;i++){
      cout << stack[i] << endl;
     }
}

int Stack::pop(){
    cout<<stack[top]<<endl;
    return top--;
}






