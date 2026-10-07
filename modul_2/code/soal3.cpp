#include <iomanip>
#include <iostream>
#include <limits>

int cariMaksimum(const int arr[], int jumlah) {
    int maksimum = arr[0];
    for (int i = 1; i < jumlah; ++i) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

int cariMinimum(const int arr[], int jumlah) {
    int minimum = arr[0];
    for (int i = 1; i < jumlah; ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

void hitungRataRata(const int arr[], int jumlah, double& rataRata) {
    double total = 0;
    for (int i = 0; i < jumlah; ++i) {
        total += arr[i];
    }
    rataRata = total / jumlah;
}

void tampilArray(const int arr[], int jumlah) {
    std::cout << "Isi array: {";
    for (int i = 0; i < jumlah; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << arr[i];
    }
    std::cout << "}\n";
}

int main() {
    const int arrA[] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    const int jumlah = sizeof(arrA) / sizeof(arrA[0]);

    while (true) {
        std::cout << "\n--- Menu Program Array ---\n"
                  << "1. Tampilkan isi array\n"
                  << "2. Cari nilai maksimum\n"
                  << "3. Cari nilai minimum\n"
                  << "4. Hitung nilai rata-rata\n"
                  << "0. Keluar\n"
                  << "Pilih menu: ";

        int pilihan;
        if (!(std::cin >> pilihan)) {
            if (std::cin.eof()) {
                return 0;
            }
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Pilihan harus berupa bilangan bulat.\n";
            continue;
        }

        switch (pilihan) {
            case 1:
                tampilArray(arrA, jumlah);
                break;
            case 2:
                std::cout << "Nilai maksimum = " << cariMaksimum(arrA, jumlah) << '\n';
                break;
            case 3:
                std::cout << "Nilai minimum = " << cariMinimum(arrA, jumlah) << '\n';
                break;
            case 4: {
                double rataRata;
                hitungRataRata(arrA, jumlah, rataRata);
                std::cout << std::fixed << std::setprecision(1)
                          << "Nilai rata-rata = " << rataRata << '\n';
                break;
            }
            case 0:
                std::cout << "Program selesai.\n";
                return 0;
            default:
                std::cout << "Pilihan tidak tersedia. Pilih 0 sampai 4.\n";
        }
    }
}
