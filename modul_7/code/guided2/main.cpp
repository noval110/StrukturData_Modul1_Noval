#include "stack.h"

#include <iostream>

int main() {
    Stack S;
    createStack(S);

    for (int i = 1; i <= 5; i++) {
        push(S, alokasi(i * 10));
    }
    std::cout << "\nSetelah push\n";
    view(S);

    std::cout << '\n';
    pop(S);
    pop(S);
    std::cout << "\nSetelah pop 2 kali\n";
    view(S);

    std::cout << '\n';
    update(S, 1, 35);
    update(S, 3, 15);
    update(S, 4, 99);
    std::cout << "\nSetelah update\n";
    view(S);

    std::cout << '\n';
    searchData(S, 20);
    searchData(S, 50);

    clearStack(S);
    return 0;
}
