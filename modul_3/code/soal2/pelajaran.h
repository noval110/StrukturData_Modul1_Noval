#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>

struct pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

pelajaran create_pelajaran(std::string namapel, std::string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif
