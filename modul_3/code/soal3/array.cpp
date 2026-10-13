#include "array.h"

#include <iomanip>
#include <iostream>

void tampilArray(const int data[][UKURAN]) {
    for (int i = 0; i < UKURAN; ++i) {
        for (int j = 0; j < UKURAN; ++j) {
            std::cout << std::setw(5) << data[i][j];
        }
        std::cout << '\n';
    }
}

bool tukarElemen(int a[][UKURAN], int b[][UKURAN],
                 int barisA, int kolomA, int barisB, int kolomB) {
    if (barisA < 0 || barisA >= UKURAN || kolomA < 0 || kolomA >= UKURAN
        || barisB < 0 || barisB >= UKURAN || kolomB < 0 || kolomB >= UKURAN) {
        return false;
    }
    const int sementara = a[barisA][kolomA];
    a[barisA][kolomA] = b[barisB][kolomB];
    b[barisB][kolomB] = sementara;
    return true;
}

void tukarPointer(int* a, int* b) {
    const int sementara = *a;
    *a = *b;
    *b = sementara;
}
