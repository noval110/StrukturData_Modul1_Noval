#include "array.h"

#include <iostream>

int main() {
    int a[UKURAN][UKURAN] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[UKURAN][UKURAN] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
    int nilaiA = 10, nilaiB = 20;
    int* pointerA = &nilaiA;
    int* pointerB = &nilaiB;

    std::cout << "Array A sebelum pertukaran:\n";
    tampilArray(a);
    std::cout << "Array B sebelum pertukaran:\n";
    tampilArray(b);

    int barisA, kolomA, barisB, kolomB;
    std::cout << "\nPosisi A (baris kolom, 1-3): ";
    if (!(std::cin >> barisA >> kolomA)
        || barisA < 1 || barisA > UKURAN || kolomA < 1 || kolomA > UKURAN) {
        std::cerr << "Posisi harus berupa bilangan bulat 1 sampai 3.\n";
        return 1;
    }
    std::cout << "Posisi B (baris kolom, 1-3): ";
    if (!(std::cin >> barisB >> kolomB)
        || barisB < 1 || barisB > UKURAN || kolomB < 1 || kolomB > UKURAN) {
        std::cerr << "Posisi harus berupa bilangan bulat 1 sampai 3.\n";
        return 1;
    }

    if (!tukarElemen(a, b, barisA - 1, kolomA - 1, barisB - 1, kolomB - 1)) {
        std::cerr << "Indeks array tidak valid.\n";
        return 1;
    }
    std::cout << "\nArray A setelah pertukaran:\n";
    tampilArray(a);
    std::cout << "Array B setelah pertukaran:\n";
    tampilArray(b);

    std::cout << "\nSebelum pertukaran melalui pointer: nilaiA = " << nilaiA
              << ", nilaiB = " << nilaiB << '\n';
    tukarPointer(pointerA, pointerB);
    std::cout << "Setelah pertukaran melalui pointer: nilaiA = " << nilaiA
              << ", nilaiB = " << nilaiB << '\n';
    return 0;
}
