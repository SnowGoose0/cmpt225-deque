#include "Deque.h"
#include <iostream>
#include <string>
using namespace std;

void test1() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 1\n\n";
    cout << "*Instantiate Empty Deque\n\n";
    Deque<int> d;
    d.display();

    cout << "\n*Enqueue Numbers 1-5 AND Dequeue 2 items\n\n";
    for (int i = 1; i <= 5; i++) {
        d.enqueue(i);
    }
    d.dequeue();
    d.dequeue();
    d.display();
    d.ddisplay();

    cout << "*Enqueue Numbers 6-10\n\n";
    for (int i = 6; i <= 10; i++) {
        d.enqueue(i);
    }
    d.display();
    d.ddisplay();

    cout << "*Jump Numbers 11-17\n\n";
    for (int i = 11; i <= 17; i++) {
        d.jump(i);
    }
    d.display();
    d.ddisplay();

    cout << "*Eject and Dequeue 5 items\n\n";
    for (int i = 0; i < 5; i++) {
        d.dequeue();
        d.eject();
    }

    d.display();
    d.ddisplay();

    cout << "*Enqueue 16 items (100-115)\n\n";
    for (int i = 100; i <= 115; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();
}

void test2() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 2\n\n";
    cout << "*Instantiate Empty Deque\n\n";
    Deque<int> d;
    d.display();

    cout << "\n*Jump Numbers 1-6\n\n";
    for (int i = 1; i < 7; i++) {
        d.jump(-i);
    }
    d.display();
    d.ddisplay();
}

int main( )
{
    test1();
    test2();
    return 0;
}