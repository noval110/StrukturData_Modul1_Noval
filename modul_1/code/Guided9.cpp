#include <iostream>

int main() {
    int jumlah;
    std::cout << "Masukkan banyak baris: ";
    if (!(std::cin >> jumlah)) return 1;
    int i = 1;
    do {
        std::cout << "baris ke-" << i << '\n';
        ++i;
    } while (i <= jumlah);
    return 0;
}
