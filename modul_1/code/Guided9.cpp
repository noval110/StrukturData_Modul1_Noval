#include <iostream>

int main() {
    int banyakBaris;
    std::cout << "Masukkan banyak baris: ";
    if (!(std::cin >> banyakBaris)) return 1;
    int nomorBaris = 1;
    do {
        std::cout << "baris ke-" << nomorBaris << '\n';
        ++nomorBaris;
    } while (nomorBaris <= banyakBaris);
    return 0;
}
