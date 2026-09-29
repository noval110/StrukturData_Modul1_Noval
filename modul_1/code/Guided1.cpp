#include <iostream>

int main() {
    int angkaUtama = 9;
    int tambahan = 4;
    int pembagiAwal = 3;
    int pembagiLain = 2;
    float hasil = (angkaUtama + tambahan) / (pembagiAwal + pembagiLain);
    std::cout << "Hasil pembagian integer = " << hasil << '\n';
    return 0;
}
