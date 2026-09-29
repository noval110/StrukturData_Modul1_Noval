#include <iostream>

int main() {
    int jumlah;
    std::cout << "Jumlah perulangan: ";
    if (!(std::cin >> jumlah) || jumlah < 0) return 1;
    for (int i = 0; i < jumlah; ++i) std::cout << "saya pintar\n";
    return 0;
}
