#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    linkedlist list;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(list);

    nodeA = alokasi("Dhimas", "001", 20);
    nodeB = alokasi("Budi", "002", 21);
    nodeC = alokasi("Andi", "003", 22);
    nodeD = alokasi("Caca", "004", 23);
    nodeE = alokasi("Dewi", "005", 24);
}