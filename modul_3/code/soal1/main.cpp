#include "mahasiswa.h"

#include <iostream>

int main() {
    mahasiswa data[MAKS_MAHASISWA]{};
    int jumlah;

    std::cout << "Jumlah mahasiswa (1-3): ";
    if (!(std::cin >> jumlah) || jumlah < 1 || jumlah > MAKS_MAHASISWA) {
        std::cerr << "Jumlah mahasiswa harus bilangan bulat 1 sampai 3.\n";
        return 1;
    }

    for (int i = 0; i < jumlah; ++i) {
        std::cout << "\nInput mahasiswa ke-" << i + 1 << '\n';
        if (!inputMahasiswa(data[i])) {
            std::cerr << "Input tidak valid. Nama dan NIM wajib diisi; "
                      << "nilai harus berupa angka 0 sampai 100.\n";
            return 1;
        }
    }

    std::cout << "\n=== Data Mahasiswa ===\n";
    for (int i = 0; i < jumlah; ++i) {
        std::cout << "\nMahasiswa ke-" << i + 1 << '\n';
        tampilMahasiswa(data[i]);
    }
    return 0;
}
