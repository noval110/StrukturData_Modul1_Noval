#include "pelajaran.h"

#include <iostream>

pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    return {namapel, kodepel};
}

void tampil_pelajaran(pelajaran pel) {
    std::cout << "Nama pelajaran : " << pel.namaMapel << '\n'
              << "Kode pelajaran : " << pel.kodeMapel << '\n';
}
