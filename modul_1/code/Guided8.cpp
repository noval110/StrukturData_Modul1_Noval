#include <iostream>

int main() {
    int jumlah;
    std::cout << "Masukkan banyak baris: ";
    if (!(std::cin >> jumlah) || jumlah < 0) return 1;
    int i = 1;
    while (i <= jumlah) {
        std::cout << "baris ke-" << i << '\n';
        ++i;
    }
    return 0;
}
