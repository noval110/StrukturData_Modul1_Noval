#include "bstree.h"

#include <iostream>

using namespace std;

int main() {
    cout << "Hello World" << endl;

    cout << "\n Soal 1 " << endl;
    address root = Nil;
    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6);
    insertNode(root, 7);
    cout << "in-order : ";
    printInorder(root);
    cout << endl;

    address p = findNode(4, root);
    cout << "Cari 4 : " << (p != Nil ? "ditemukan" : "tidak ditemukan") << endl;
    p = findNode(8, root);
    cout << "Cari 8 : " << (p != Nil ? "ditemukan" : "tidak ditemukan") << endl;

    cout << "\n Soal 2 " << endl;
    cout << "kedalaman : " << hitungKedalaman(root, 0) << endl;
    cout << "jumlah Node : " << hitungJumlahNode(root) << endl;
    cout << "total : " << hitungTotalInfo(root, 0) << endl;

    cout << "\n Soal 3 " << endl;
    address root2 = Nil;
    insertNode(root2, 6);
    insertNode(root2, 4);
    insertNode(root2, 7);
    insertNode(root2, 2);
    insertNode(root2, 5);
    insertNode(root2, 1);
    insertNode(root2, 3);
    cout << "pre-order  : ";
    printPreorder(root2);
    cout << endl;
    cout << "post-order : ";
    printPostorder(root2);
    cout << endl;

    return 0;
}
