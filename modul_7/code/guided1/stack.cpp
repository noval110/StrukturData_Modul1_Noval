#include "stack.h"

#include <iostream>

void createStack(Stack& S) {
    S.top = 0;
}

bool isEmpty(const Stack& S) {
    return S.top == 0;
}

bool isFull(const Stack& S) {
    return S.top == MAX_STACK;
}

void push(Stack& S, int x) {
    if (isFull(S)) {
        std::cout << "Stack penuh, " << x << " tidak dapat ditambahkan\n";
        return;
    }
    S.data[S.top] = x;
    S.top++;
    std::cout << "Push " << x << '\n';
}

void pop(Stack& S) {
    if (isEmpty(S)) {
        std::cout << "Stack kosong\n";
        return;
    }
    S.top--;
    std::cout << "Pop " << S.data[S.top] << '\n';
}

// posisi dihitung dari Top: posisi 1 adalah elemen paling atas
void update(Stack& S, int posisi, int nilaiBaru) {
    if (posisi < 1 || posisi > S.top) {
        std::cout << "Posisi " << posisi << " tidak valid\n";
        return;
    }
    int idx = S.top - posisi;
    std::cout << "Update posisi " << posisi << ": " << S.data[idx] << " -> " << nilaiBaru << '\n';
    S.data[idx] = nilaiBaru;
}

void view(const Stack& S) {
    std::cout << "[TOP]";
    for (int i = S.top - 1; i >= 0; i--) {
        std::cout << ' ' << S.data[i];
    }
    std::cout << '\n';
}

void searchData(const Stack& S, int x) {
    for (int i = S.top - 1; i >= 0; i--) {
        if (S.data[i] == x) {
            std::cout << "Data " << x << " ditemukan pada posisi " << S.top - i << '\n';
            return;
        }
    }
    std::cout << "Data " << x << " tidak ditemukan\n";
}
