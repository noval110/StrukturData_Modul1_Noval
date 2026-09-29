#include <iostream>

int main() {
    int banyakUlangan;
    std::cout << "Jumlah perulangan: ";
    if (!(std::cin >> banyakUlangan) || banyakUlangan < 0) return 1;
    for (int urutan = 1; urutan <= banyakUlangan; ++urutan) {
        std::cout << urutan << ". Saya belajar C++\n";
    }
    return 0;
}
