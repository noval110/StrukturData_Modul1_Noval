#include <iomanip>
#include <iostream>

const int UKURAN = 3;

bool inputMatriks(double matriks[][UKURAN], char nama) {
    std::cout << "Masukkan matriks " << nama << " (3 baris, masing-masing 3 angka):\n";
    for (int i = 0; i < UKURAN; ++i) {
        for (int j = 0; j < UKURAN; ++j) {
            if (!(std::cin >> matriks[i][j])) {
                return false;
            }
        }
    }
    return true;
}

void jumlahMatriks(const double a[][UKURAN], const double b[][UKURAN],
                   double hasil[][UKURAN]) {
    for (int i = 0; i < UKURAN; ++i) {
        for (int j = 0; j < UKURAN; ++j) {
            hasil[i][j] = a[i][j] + b[i][j];
        }
    }
}

void kurangMatriks(const double a[][UKURAN], const double b[][UKURAN],
                   double hasil[][UKURAN]) {
    for (int i = 0; i < UKURAN; ++i) {
        for (int j = 0; j < UKURAN; ++j) {
            hasil[i][j] = a[i][j] - b[i][j];
        }
    }
}

void kaliMatriks(const double a[][UKURAN], const double b[][UKURAN],
                 double hasil[][UKURAN]) {
    for (int i = 0; i < UKURAN; ++i) {
        for (int j = 0; j < UKURAN; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < UKURAN; ++k) {
                hasil[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void tampilMatriks(const double matriks[][UKURAN]) {
    for (int i = 0; i < UKURAN; ++i) {
        for (int j = 0; j < UKURAN; ++j) {
            std::cout << std::setw(10) << matriks[i][j];
        }
        std::cout << '\n';
    }
}

int main() {
    double a[UKURAN][UKURAN];
    double b[UKURAN][UKURAN];
    double hasil[UKURAN][UKURAN];

    if (!inputMatriks(a, 'A') || !inputMatriks(b, 'B')) {
        std::cerr << "Input matriks harus berupa angka.\n";
        return 1;
    }

    jumlahMatriks(a, b, hasil);
    std::cout << "\nHasil penjumlahan A + B:\n";
    tampilMatriks(hasil);

    kurangMatriks(a, b, hasil);
    std::cout << "\nHasil pengurangan A - B:\n";
    tampilMatriks(hasil);

    kaliMatriks(a, b, hasil);
    std::cout << "\nHasil perkalian A * B:\n";
    tampilMatriks(hasil);

    return 0;
}
