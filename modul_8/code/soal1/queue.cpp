#include "queue.h"

#include <iostream>

void createQueue(Queue& Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1;
}

bool isFullQueue(Queue Q) {
    return Q.tail == MAX_QUEUE - 1;
}

void enqueue(Queue& Q, infotype x) {
    if (isFullQueue(Q)) {
        std::cout << "Queue penuh, " << x << " tidak dapat ditambahkan\n";
        return;
    }
    if (isEmptyQueue(Q)) {
        Q.head = 0;
    }
    Q.tail++;
    Q.info[Q.tail] = x;
}

infotype dequeue(Queue& Q) {
    if (isEmptyQueue(Q)) {
        std::cout << "Queue kosong\n";
        return 0;
    }
    infotype x = Q.info[Q.head];
    for (int i = Q.head; i < Q.tail; i++) {
        Q.info[i] = Q.info[i + 1];
    }
    Q.tail--;
    if (Q.tail < Q.head) {
        createQueue(Q);
    }
    return x;
}

void printInfo(Queue Q) {
    std::cout << Q.head << " - " << Q.tail << "\t | ";
    if (isEmptyQueue(Q)) {
        std::cout << "empty queue\n";
        return;
    }
    for (int i = Q.head; i <= Q.tail; i++) {
        std::cout << Q.info[i] << ' ';
    }
    std::cout << '\n';
}
