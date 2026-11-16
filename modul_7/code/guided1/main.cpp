#include "stack.h"

#include <iostream>

int main() {
    Stack S;
    createStack(S);

    for (int i = 1; i <= 5; i++) {
        push(S, i);
    }
    std::cout << "\nSetelah push\n";
    view(S);

    std::cout << '\n';
    pop(S);
    pop(S);
    std::cout << "\nSetelah pop 2 kali\n";
    view(S);

    std::cout << '\n';
    update(S, 1, 9);
    update(S, 2, 7);
    update(S, 5, 4);
    std::cout << "\nSetelah update\n";
    view(S);

    std::cout << '\n';
    searchData(S, 7);
    searchData(S, 4);
    return 0;
}
