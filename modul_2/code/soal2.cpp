#include <iostream>

void tukarPointer(int* a, int* b, int* c) {
    const int sementara = *a;
    *a = *b;
    *b = *c;
    *c = sementara;
}

void tukarReference(int& a, int& b, int& c) {
    const int sementara = a;
    a = b;
    b = c;
    c = sementara;
}

void tampilNilai(int a, int b, int c) {
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << '\n';
}

int main() {
    int a, b, c;
    std::cout << "Masukkan nilai a, b, dan c (bilangan bulat): ";
    if (!(std::cin >> a >> b >> c)) {
        std::cerr << "Input harus berupa tiga bilangan bulat.\n";
        return 1;
    }

    int aPointer = a, bPointer = b, cPointer = c;
    int aReference = a, bReference = b, cReference = c;

    std::cout << "\nSebelum pertukaran:\n";
    tampilNilai(a, b, c);

    tukarPointer(&aPointer, &bPointer, &cPointer);
    std::cout << "\nSetelah pertukaran dengan pointer:\n";
    tampilNilai(aPointer, bPointer, cPointer);

    tukarReference(aReference, bReference, cReference);
    std::cout << "\nSetelah pertukaran dengan reference:\n";
    tampilNilai(aReference, bReference, cReference);

    return 0;
}
