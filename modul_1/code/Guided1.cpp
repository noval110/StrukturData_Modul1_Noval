#include <iostream>

int main() {
    int w = 1, x = 7, y = 3;
    float z = (x + y) / (y + w); // Pembagian integer menghasilkan 2.
    std::cout << "Nilai z = " << z << '\n';
    return 0;
}
