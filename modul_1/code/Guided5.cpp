#include <iostream>

int main() {
    double total;
    std::cout << "Total pembelian: Rp";
    if (!(std::cin >> total) || total < 0) return 1;
    double diskon;
    if (total >= 100000) {
        diskon = 0.05 * total;
    } else {
        diskon = 0;
    }
    std::cout << "Besar diskon = Rp" << diskon << '\n';
    return 0;
}
