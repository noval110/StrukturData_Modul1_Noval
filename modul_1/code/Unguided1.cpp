#include <iostream>

int main() {
    float pertama, kedua;
    std::cout << "Masukkan dua bilangan: ";
    if (!(std::cin >> pertama >> kedua)) {
        std::cerr << "Input harus berupa dua bilangan.\n";
        return 1;
    }

    std::cout << "Penjumlahan = " << pertama + kedua << '\n';
    std::cout << "Pengurangan = " << pertama - kedua << '\n';
    std::cout << "Perkalian   = " << pertama * kedua << '\n';
    if (kedua == 0.0f) {
        std::cout << "Pembagian  = tidak terdefinisi (pembagi nol)\n";
    } else {
        std::cout << "Pembagian  = " << pertama / kedua << '\n';
    }
    return 0;
}
