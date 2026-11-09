#include "Doublylist.h"

#include <iostream>

int main() {
    List L;
    CreateList(L);

    for (int i = 0; i < 4; i++) {
        infotype x;
        std::cout << "masukkan nomor polisi: ";
        std::cin >> x.nopol;
        std::cout << "masukkan warna kendaraan: ";
        std::cin >> x.warna;
        std::cout << "masukkan tahun kendaraan: ";
        std::cin >> x.thnBuat;

        if (findElm(L, x) != Nil) {
            std::cout << "nomor polisi sudah terdaftar\n";
        } else {
            insertLast(L, alokasi(x));
        }
        std::cout << '\n';
    }

    std::cout << "DATA LIST 1\n\n";
    printInfo(L);

    infotype cari;
    std::cout << "\nMasukkan Nomor Polisi yang dicari : ";
    std::cin >> cari.nopol;
    address hasil = findElm(L, cari);
    std::cout << '\n';
    if (hasil != Nil) {
        std::cout << "Nomor Polisi : " << hasil->info.nopol << '\n';
        std::cout << "Warna        : " << hasil->info.warna << '\n';
        std::cout << "Tahun        : " << hasil->info.thnBuat << '\n';
    } else {
        std::cout << "Nomor polisi " << cari.nopol << " tidak ditemukan.\n";
    }

    infotype hapus;
    std::cout << "\nMasukkan Nomor Polisi yang akan dihapus : ";
    std::cin >> hapus.nopol;
    address P = findElm(L, hapus);
    if (P != Nil) {
        if (P == L.First) {
            deleteFirst(L, P);
        } else if (P == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(P->prev, P);
        }
        dealokasi(P);
        std::cout << "Data dengan nomor polisi " << hapus.nopol
                  << " berhasil dihapus.\n";
    } else {
        std::cout << "Data dengan nomor polisi " << hapus.nopol
                  << " tidak ditemukan.\n";
    }

    std::cout << "\nDATA LIST 1\n\n";
    printInfo(L);

    while (L.First != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
    return 0;
}
