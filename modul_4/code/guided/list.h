#ifndef list_h
#define list_h
#define Nil NULL

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    int umur;
};

typedef mahasiswa dataMahasiswa;
typedef struct node *address;

struct node
{
    dataMahasiswa isidata;
    address next;
};
struct linkedlist
{
    address first;
};

bool isEmpty(linkedlist list);
void createList(linkedlist &list);
address alokasi(string name, string nim, int umur);
void dealokasi (address &node);
void printList(linkedlist list);
void insertFirst(linkedlist &list, address nodeBaru);
void insertAfter(linkedlist Glist, address nodeBaru, address prev);
void insertLast(linkedlist Glist, address nodeBaru);
void delPirst(linkedlist Glist);
void dellast (linkedlist Glist);
void delAfter (linkedlist list, address nodeHapus, address nodePrev);
int nbList(linkedlist list);
void delist (linkedlist Glist);

#endif