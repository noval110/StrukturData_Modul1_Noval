#ifndef STACK_H
#define STACK_H

constexpr int MAX_STACK = 10;

struct Stack {
    int data[MAX_STACK];
    int top;
};

void createStack(Stack& S);
bool isEmpty(const Stack& S);
bool isFull(const Stack& S);
void push(Stack& S, int x);
void pop(Stack& S);
void update(Stack& S, int posisi, int nilaiBaru);
void view(const Stack& S);
void searchData(const Stack& S, int x);

#endif
