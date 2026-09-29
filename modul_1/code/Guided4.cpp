#include <iostream>

int main() {
    double nilaiBelanja;
    std::cout << "Total pembelian: Rp";
    if (!(std::cin >> nilaiBelanja) || nilaiBelanja < 0) return 1;
    double potonganHarga = 0;
    if (nilaiBelanja >= 100000) potonganHarga = nilaiBelanja * 5 / 100;
    std::cout << "Besar diskon = Rp" << potonganHarga << '\n';
    return 0;
}
