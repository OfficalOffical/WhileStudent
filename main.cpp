#include <iostream>

using namespace std;

#define MAX 20

int queue[MAX];
int tail=-1;
int head=0;

bool FullOrEmpty(){
    if(tail < MAX || head < -1)
        return 1;
    else
        return 0;
}

void push(int data){
    if(!FullOrEmpty()){
        tail++;
        queue[tail]= data;
    }
    else
        cout<<"Under or OverFlow"<<endl;
}
void pop(){
    if(!FullOrEmpty()){
        cout<<queue[head];
        queue[head] = 0;
        head++;
    }
}


int main() {

    return 0;
}