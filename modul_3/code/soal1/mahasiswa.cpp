#include "mahasiswa.h"

#include <cmath>
#include <iomanip>
#include <iostream>

double hitungNilaiAkhir(double uts, double uas, double tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

mahasiswa create_mahasiswa(const std::string& nama, const std::string& nim,
                           double uts, double uas, double tugas) {
    return {nama, nim, uts, uas, tugas, hitungNilaiAkhir(uts, uas, tugas)};
}

bool inputMahasiswa(mahasiswa& m) {
    std::string nama, nim;
    double uts, uas, tugas;

    std::cout << "Nama  : ";
    if (!std::getline(std::cin >> std::ws, nama) || nama.empty()) {
        return false;
    }
    std::cout << "NIM   : ";
    if (!(std::cin >> nim)) {
        return false;
    }
    std::cout << "UTS   : ";
    if (!(std::cin >> uts) || !std::isfinite(uts) || uts < 0 || uts > 100) {
        return false;
    }
    std::cout << "UAS   : ";
    if (!(std::cin >> uas) || !std::isfinite(uas) || uas < 0 || uas > 100) {
        return false;
    }
    std::cout << "Tugas : ";
    if (!(std::cin >> tugas) || !std::isfinite(tugas) || tugas < 0 || tugas > 100) {
        return false;
    }

    m = create_mahasiswa(nama, nim, uts, uas, tugas);
    return true;
}

void tampilMahasiswa(const mahasiswa& m) {
    std::cout << "Nama        : " << m.nama << '\n'
              << "NIM         : " << m.nim << '\n'
              << std::fixed << std::setprecision(2)
              << "UTS         : " << m.uts << '\n'
              << "UAS         : " << m.uas << '\n'
              << "Tugas       : " << m.tugas << '\n'
              << "Nilai akhir : " << m.nilaiAkhir << '\n';
}
