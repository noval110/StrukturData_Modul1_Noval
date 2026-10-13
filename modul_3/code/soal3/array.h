#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

const int UKURAN = 3;

void tampilArray(const int data[][UKURAN]);
bool tukarElemen(int a[][UKURAN], int b[][UKURAN],
                 int barisA, int kolomA, int barisB, int kolomB);
void tukarPointer(int* a, int* b);

#endif
