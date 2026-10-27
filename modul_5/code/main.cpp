#include "Singlylist.h"

#include <iostream>

int main() {
    List L;
    address P1 = Nil, P2 = Nil, P3 = Nil, P4 = Nil, P5 = Nil;
    CreateList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);
    P2 = alokasi(0);
    insertFirst(L, P2);
    P3 = alokasi(8);
    insertFirst(L, P3);
    P4 = alokasi(12);
    insertFirst(L, P4);
    P5 = alokasi(9);
    insertFirst(L, P5);

    printInfo(L);

    address hasil = findElm(L, 8);
    if (hasil != Nil) {
        std::cout << hasil->info << " ditemukan dalam list\n";
    } else {
        std::cout << "8 tidak ditemukan dalam list\n";
    }
    std::cout << "Total info dari kelima elemen adalah "
              << totalInfo(L) << '\n';
    hasil = Nil;

    while (L.First != Nil) {
        address P = L.First;
        L.First = P->next;
        dealokasi(P);
    }
    P1 = P2 = P3 = P4 = P5 = Nil;
    return 0;
}
