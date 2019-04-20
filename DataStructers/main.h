//
// Created by Sefa on 19.04.2019.
//

#ifndef LION_MAIN_H
#define LION_MAIN_H

#include <iostream>

#define TheSize 20

using namespace std;

class Stack{
private:
    int stack[TheSize];
    int top;
public:
    Stack();
    ~Stack();
    int push(int i);
    int pop();
    void info();
};

#endif //LION_MAIN_H
