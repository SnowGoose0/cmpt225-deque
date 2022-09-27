#include "Deque.h"
#include <iostream>
#include <string>
using namespace std;

void test1() {
    Deque<int> d;
    for (int i = 0; i < 4; i++) {
        d.enqueue(i);
    }

    d.display();
    d[2] = -99;
    d[1] = 55;
    d.display();
}

int main() {
    
    test1();
    return 0;
}