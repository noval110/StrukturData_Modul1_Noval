#include "Singlylist.h"

#include <iostream>

void CreateList(List& L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    return new ElmList{x, Nil};
}

void dealokasi(address& P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        std::cout << P->info;
        if (P->next != Nil) {
            std::cout << ' ';
        }
        P = P->next;
    }
    std::cout << '\n';
}

void insertFirst(List& L, address P) {
    if (P == Nil) {
        return;
    }
    P->next = L.First;
    L.First = P;
}
