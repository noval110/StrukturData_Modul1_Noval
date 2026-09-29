#include <iostream>
#include <string>

std::string satuan(int angka) {
    const std::string kata[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };
    return kata[angka];
}

std::string terbilang(int angka) {
    if (angka < 10) return satuan(angka);
    if (angka == 10) return "sepuluh";
    if (angka == 11) return "sebelas";
    if (angka < 20) return satuan(angka - 10) + " belas";
    if (angka == 100) return "seratus";

    std::string hasil = satuan(angka / 10) + " puluh";
    if (angka % 10 != 0) hasil += " " + satuan(angka % 10);
    return hasil;
}

int main() {
    int angka;
    std::cout << "Masukkan angka (0-100): ";
    if (!(std::cin >> angka) || angka < 0 || angka > 100) {
        std::cerr << "Input harus bilangan bulat dari 0 sampai 100.\n";
        return 1;
    }

    std::cout << angka << " : " << terbilang(angka) << '\n';
    return 0;
}
