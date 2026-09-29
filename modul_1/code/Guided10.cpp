#include <iostream>
#include <string>

struct Siswa {
    std::string nama;
    int nilai;
};

int main() {
    const int jumlah = 5;
    Siswa siswa[jumlah];
    for (int i = 0; i < jumlah; ++i) {
        std::cout << "Data ke-" << i + 1 << "\nNama: ";
        std::getline(std::cin >> std::ws, siswa[i].nama);
        std::cout << "Nilai: ";
        if (!(std::cin >> siswa[i].nilai)) return 1;
    }
    std::cout << "\nData siswa\n";
    for (int i = 0; i < jumlah; ++i) {
        std::cout << i + 1 << ". " << siswa[i].nama << " - " << siswa[i].nilai << '\n';
    }
    return 0;
}
