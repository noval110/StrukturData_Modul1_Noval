#include <iostream>

int main() {
    int r = 10;
    int s = 10 + ++r; // r dinaikkan sebelum digunakan.
    std::cout << "Nilai r = " << r << "\nNilai s = " << s << '\n';
    return 0;
}
