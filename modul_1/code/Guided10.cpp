#include <iostream>
#include <string>

struct CatatanNilai {
    std::string namaLengkap;
    int skor;
};

int main() {
    const int kapasitas = 5;
    CatatanNilai daftar[kapasitas];
    for (int posisi = 0; posisi < kapasitas; ++posisi) {
        std::cout << "Data ke-" << posisi + 1 << "\nNama: ";
        std::getline(std::cin >> std::ws, daftar[posisi].namaLengkap);
        std::cout << "Nilai: ";
        if (!(std::cin >> daftar[posisi].skor)) return 1;
    }
    std::cout << "\nData siswa\n";
    for (int posisi = 0; posisi < kapasitas; ++posisi) {
        std::cout << posisi + 1 << ". " << daftar[posisi].namaLengkap
                  << " - " << daftar[posisi].skor << '\n';
    }
    return 0;
}
