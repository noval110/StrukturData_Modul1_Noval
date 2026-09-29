#include <iostream>

int main() {
    int penghitung = 7;
    int hasilTambah = 5 + ++penghitung;
    std::cout << "Penghitung = " << penghitung
              << "\nHasil tambah = " << hasilTambah << '\n';
    return 0;
}
