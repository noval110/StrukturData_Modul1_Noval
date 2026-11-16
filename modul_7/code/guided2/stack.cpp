#include "stack.h"

#include <iostream>

void createStack(Stack& S) {
    S.top = nullptr;
}

bool isEmpty(const Stack& S) {
    return S.top == nullptr;
}

address alokasi(int x) {
    address P = new Node;
    P->info = x;
    P->next = nullptr;
    return P;
}

void dealokasi(address& P) {
    delete P;
    P = nullptr;
}

void push(Stack& S, address P) {
    P->next = S.top;
    S.top = P;
    std::cout << "Push " << P->info << '\n';
}

void pop(Stack& S) {
    if (isEmpty(S)) {
        std::cout << "Stack kosong\n";
        return;
    }
    address P = S.top;
    S.top = P->next;
    P->next = nullptr;
    std::cout << "Pop " << P->info << '\n';
    dealokasi(P);
}

// posisi dihitung dari Top: posisi 1 adalah node paling atas
void update(Stack& S, int posisi, int nilaiBaru) {
    address P = S.top;
    int i = 1;
    while (P != nullptr && i < posisi) {
        P = P->next;
        i++;
    }
    if (posisi < 1 || P == nullptr) {
        std::cout << "Posisi " << posisi << " tidak valid\n";
        return;
    }
    std::cout << "Update posisi " << posisi << ": " << P->info << " -> " << nilaiBaru << '\n';
    P->info = nilaiBaru;
}

void view(const Stack& S) {
    std::cout << "[TOP]";
    for (address P = S.top; P != nullptr; P = P->next) {
        std::cout << ' ' << P->info;
    }
    std::cout << '\n';
}

void searchData(const Stack& S, int x) {
    int posisi = 1;
    for (address P = S.top; P != nullptr; P = P->next) {
        if (P->info == x) {
            std::cout << "Data " << x << " ditemukan pada posisi " << posisi << '\n';
            return;
        }
        posisi++;
    }
    std::cout << "Data " << x << " tidak ditemukan\n";
}

void clearStack(Stack& S) {
    while (!isEmpty(S)) {
        address P = S.top;
        S.top = P->next;
        dealokasi(P);
    }
}
