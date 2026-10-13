#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

#include <string>

const int MAKS_MAHASISWA = 3;

struct mahasiswa {
    std::string nama;
    std::string nim;
    double uts;
    double uas;
    double tugas;
    double nilaiAkhir;
};

double hitungNilaiAkhir(double uts, double uas, double tugas);
mahasiswa create_mahasiswa(const std::string& nama, const std::string& nim,
                           double uts, double uas, double tugas);
bool inputMahasiswa(mahasiswa& m);
void tampilMahasiswa(const mahasiswa& m);

#endif
