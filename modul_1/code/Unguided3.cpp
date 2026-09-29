#include <iostream>
#include <string>

int main() {
    int ukuranPola;
    std::cout << "Masukkan angka: ";
    if (!(std::cin >> ukuranPola) || ukuranPola < 0) {
        std::cerr << "Input harus bilangan bulat tidak negatif.\n";
        return 1;
    }

    for (int tingkat = 0; tingkat <= ukuranPola; ++tingkat) {
        const int batasAngka = ukuranPola - tingkat;
        std::cout << std::string(tingkat * 2, ' ');
        for (int kiri = batasAngka; kiri > 0; --kiri) std::cout << kiri << ' ';
        std::cout << '*';
        for (int kanan = 1; kanan <= batasAngka; ++kanan) std::cout << ' ' << kanan;
        std::cout << '\n';
    }
    return 0;
}
