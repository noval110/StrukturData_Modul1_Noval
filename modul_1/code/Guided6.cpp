#include <iostream>

int main() {
    int kode;
    std::cout << "Kode hari (1=Senin, ..., 7=Minggu): ";
    if (!(std::cin >> kode)) return 1;
    switch (kode) {
        case 1: case 2: case 3: case 4: case 5:
            std::cout << "Hari Kerja\n";
            break;
        case 6: case 7:
            std::cout << "Hari Libur\n";
            break;
        default:
            std::cout << "Kode masukan salah\n";
    }
    return 0;
}
