#include "stack.h"

#include <iostream>

void createStack(Stack& S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == MAX_STACK;
}

void push(Stack& S, infotype x) {
    if (isFull(S)) {
        std::cout << "Stack penuh\n";
        return;
    }
    S.info[S.top] = x;
    S.top++;
}

infotype pop(Stack& S) {
    if (isEmpty(S)) {
        std::cout << "Stack kosong\n";
        return 0;
    }
    S.top--;
    return S.info[S.top];
}

void printInfo(Stack S) {
    std::cout << "[TOP]";
    for (int i = S.top - 1; i >= 0; i--) {
        std::cout << ' ' << S.info[i];
    }
    std::cout << '\n';
}

void balikStack(Stack& S) {
    int kiri = 0;
    int kanan = S.top - 1;
    while (kiri < kanan) {
        infotype temp = S.info[kiri];
        S.info[kiri] = S.info[kanan];
        S.info[kanan] = temp;
        kiri++;
        kanan--;
    }
}

void pushAscending(Stack& S, infotype x) {
    Stack temp;
    createStack(temp);
    while (!isEmpty(S) && S.info[S.top - 1] > x) {
        push(temp, pop(S));
    }
    push(S, x);
    while (!isEmpty(temp)) {
        push(S, pop(temp));
    }
}

void getInputStream(Stack& S) {
    int c = std::cin.get();
    while (c != '\n' && c != EOF) {
        if (c >= '0' && c <= '9') {
            push(S, c - '0');
        }
        c = std::cin.get();
    }
}
