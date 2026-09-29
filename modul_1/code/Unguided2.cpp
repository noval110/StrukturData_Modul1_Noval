#include <iostream>
#include <string>

std::string namaDigit(int digit) {
    const std::string sebutan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };
    return sebutan[digit];
}

std::string ejaBilangan(int bilangan) {
    if (bilangan == 100) return "seratus";
    if (bilangan < 10) return namaDigit(bilangan);

    const int puluhan = bilangan / 10;
    const int satuan = bilangan % 10;
    if (puluhan == 1) {
        if (satuan == 0) return "sepuluh";
        if (satuan == 1) return "sebelas";
        return namaDigit(satuan) + " belas";
    }

    std::string bacaan = namaDigit(puluhan) + " puluh";
    if (satuan > 0) bacaan += " " + namaDigit(satuan);
    return bacaan;
}

int main() {
    int bilangan;
    std::cout << "Masukkan angka (0-100): ";
    if (!(std::cin >> bilangan) || bilangan < 0 || bilangan > 100) {
        std::cerr << "Input harus bilangan bulat dari 0 sampai 100.\n";
        return 1;
    }

    std::cout << bilangan << " : " << ejaBilangan(bilangan) << '\n';
    return 0;
}
