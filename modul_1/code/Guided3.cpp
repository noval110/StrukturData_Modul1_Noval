#include <iostream>

int main() {
    int r = 10;
    int s = 10 + r++; // r digunakan sebelum dinaikkan.
    std::cout << "Nilai r = " << r << "\nNilai s = " << s << '\n';
    return 0;
}
