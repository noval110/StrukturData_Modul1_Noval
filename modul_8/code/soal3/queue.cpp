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
    return !isEmptyQueue(Q) && (Q.tail + 1) % MAX_QUEUE == Q.head;
}

void enqueue(Queue& Q, infotype x) {
    if (isFullQueue(Q)) {
        std::cout << "Queue penuh, " << x << " tidak dapat ditambahkan\n";
        return;
    }
    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail = (Q.tail + 1) % MAX_QUEUE;
    }
    Q.info[Q.tail] = x;
}

infotype dequeue(Queue& Q) {
    if (isEmptyQueue(Q)) {
        std::cout << "Queue kosong\n";
        return 0;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {
        createQueue(Q);
    } else {
        Q.head = (Q.head + 1) % MAX_QUEUE;
    }
    return x;
}

void printInfo(Queue Q) {
    std::cout << Q.head << " - " << Q.tail << "\t | ";
    if (isEmptyQueue(Q)) {
        std::cout << "empty queue\n";
        return;
    }
    int i = Q.head;
    while (true) {
        std::cout << Q.info[i] << ' ';
        if (i == Q.tail) {
            break;
        }
        i = (i + 1) % MAX_QUEUE;
    }
    std::cout << '\n';
}
