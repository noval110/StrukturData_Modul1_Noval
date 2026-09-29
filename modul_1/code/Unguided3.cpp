#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan angka: ";
    if (!(std::cin >> n) || n < 0) {
        std::cerr << "Input harus bilangan bulat tidak negatif.\n";
        return 1;
    }

    for (int baris = n; baris >= 0; --baris) {
        for (int spasi = 0; spasi < n - baris; ++spasi) std::cout << "  ";
        for (int angka = baris; angka >= 1; --angka) std::cout << angka << ' ';
        std::cout << '*';
        for (int angka = 1; angka <= baris; ++angka) std::cout << ' ' << angka;
        std::cout << '\n';
    }
    return 0;
}
