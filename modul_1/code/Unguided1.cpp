#include <iostream>

int main() {
    float nilaiKiri, nilaiKanan;
    std::cout << "Masukkan dua bilangan: ";
    if (!(std::cin >> nilaiKiri >> nilaiKanan)) {
        std::cerr << "Input harus berupa dua bilangan.\n";
        return 1;
    }

    const float jumlah = nilaiKiri + nilaiKanan;
    const float selisih = nilaiKiri - nilaiKanan;
    const float hasilKali = nilaiKiri * nilaiKanan;

    std::cout << "Penjumlahan = " << jumlah << '\n'
              << "Pengurangan = " << selisih << '\n'
              << "Perkalian   = " << hasilKali << '\n';

    if (nilaiKanan == 0.0f) {
        std::cout << "Pembagian  = tidak terdefinisi (pembagi nol)\n";
    } else {
        const float hasilBagi = nilaiKiri / nilaiKanan;
        std::cout << "Pembagian  = " << hasilBagi << '\n';
    }
    return 0;
}
