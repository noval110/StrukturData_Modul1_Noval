#include <iostream>

int main() {
    int banyakBaris;
    std::cout << "Masukkan banyak baris: ";
    if (!(std::cin >> banyakBaris) || banyakBaris < 0) return 1;
    int nomorBaris = 1;
    while (nomorBaris <= banyakBaris) {
        std::cout << "baris ke-" << nomorBaris << '\n';
        ++nomorBaris;
    }
    return 0;
}
