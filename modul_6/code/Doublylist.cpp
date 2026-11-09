#include "Doublylist.h"

#include <iostream>

void CreateList(List& L) {
    L.First = Nil;
    L.Last = Nil;
}

address alokasi(infotype x) {
    return new ElmList{x, Nil, Nil};
}

void dealokasi(address& P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.Last;
    while (P != Nil) {
        std::cout << "Nomor Polisi : " << P->info.nopol << '\n';
        std::cout << "Warna        : " << P->info.warna << '\n';
        std::cout << "Tahun        : " << P->info.thnBuat << '\n';
        P = P->prev;
    }
}

void insertLast(List& L, address P) {
    if (P == Nil) {
        return;
    }
    if (L.First == Nil) {
        L.First = P;
        L.Last = P;
    } else {
        P->prev = L.Last;
        L.Last->next = P;
        L.Last = P;
    }
}

address findElm(List L, infotype x) {
    address P = L.First;
    while (P != Nil && P->info.nopol != x.nopol) {
        P = P->next;
    }
    return P;
}

void deleteFirst(List& L, address& P) {
    P = L.First;
    if (P == Nil) {
        return;
    }
    if (L.First == L.Last) {
        L.First = Nil;
        L.Last = Nil;
    } else {
        L.First = L.First->next;
        L.First->prev = Nil;
    }
    P->next = Nil;
    P->prev = Nil;
}

void deleteLast(List& L, address& P) {
    P = L.Last;
    if (P == Nil) {
        return;
    }
    if (L.First == L.Last) {
        L.First = Nil;
        L.Last = Nil;
    } else {
        L.Last = L.Last->prev;
        L.Last->next = Nil;
    }
    P->next = Nil;
    P->prev = Nil;
}

void deleteAfter(address Prec, address& P) {
    P = Prec->next;
    if (P == Nil) {
        return;
    }
    Prec->next = P->next;
    if (P->next != Nil) {
        P->next->prev = Prec;
    }
    P->next = Nil;
    P->prev = Nil;
}
