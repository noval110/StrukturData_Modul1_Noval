#ifndef STACK_H
#define STACK_H

typedef struct Node* address;

struct Node {
    int info;
    address next;
};

struct Stack {
    address top;
};

void createStack(Stack& S);
bool isEmpty(const Stack& S);
address alokasi(int x);
void dealokasi(address& P);
void push(Stack& S, address P);
void pop(Stack& S);
void update(Stack& S, int posisi, int nilaiBaru);
void view(const Stack& S);
void searchData(const Stack& S, int x);
void clearStack(Stack& S);

#endif
