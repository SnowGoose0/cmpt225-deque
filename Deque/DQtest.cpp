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

    cout << "\n***Enqueue INTS 1-5\n\n";
    for (int i = 1; i <= 5; i++) {
        d.enqueue(i);
    }
    d.display();
    d.ddisplay();

    cout << "***Dequeue 3 INTS\n\n";
    for (int i = 1; i <= 3; i++) {
        d.dequeue();
    }
    d.display();
    d.ddisplay();

    cout << "***Jump 2 INTS (-1 and -2)\n\n";
    for (int i = 1; i <= 2; i++) {
        d.jump(-i);
    }
    d.display();
    d.ddisplay();

    cout << "***Eject 4 INTS\n\n";
    for (int i = 1; i <= 4; i++) {
        d.eject();
    }
    d.display();
    d.ddisplay();

    cout << "---------------------------------------------------\n\n\ns";

}

void test2() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 2\n\n";
    cout << "*Instantiate Empty Deque\n\n";
    Deque<int> d;
    d.display();

    cout << "\n***Enqueue 6 INTS (1-6) THEN Dequeue 4 INTS\n\n";
    for (int i = 1; i <= 6; i++) {
        d.enqueue(i);
    }

    for (int i = 0; i < 4; i++) {
        d.dequeue();
    }

    d.display();
    d.ddisplay();

    cout << "***Enqueue 6 INTS (-101...-106)\n\n";
    for (int i = 101; i <= 106; i++) {
        d.enqueue(-i);
    }

    d.display();
    d.ddisplay();

    d.clear();
    cout << "***Clear the Deque\n\n";
    d.display();

    cout << "\n***Enqueue 5 INTS (1-5) THEN Dequeue 3 INT\n\n";
    for (int i = 1; i <= 5; i++) {
        d.enqueue(i);
    }
    d.dequeue();
    d.dequeue();
    d.dequeue();
    d.display();
    d.ddisplay();

    cout << "\n***Jump 6 INTS (-201...-206)\n\n";
    for (int i = 201; i <= 206; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();

    cout << "---------------------------------------------------\n\n\n";

}

void test3() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 3\n\n";
    cout << "*Instantiate Empty Deque\n\n";
    Deque<int> d;
    d.display();

    cout << "***Enqueue INTS (1-16) THEN Dequeue 4 INTS\n\n";
    for (int i = 1; i <= 16; i++) {
        d.enqueue(i);
    }
    for (int i = 1; i <= 4; i++) {
        d.dequeue();
    }

    d.display();
    d.ddisplay();

    cout << "***Jump 6 INTS (-400...-405)\n\n";
    for (int i = 400; i <= 405; i++) {
        d.jump(-i);
    }

    
    d.display();
    d.ddisplay();

    cout << "***Enqueue 35 INTS (21...55)\n\n";
    for (int i = 21; i <= 55; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();

    cout << "***Clear List\n\n";
    d.clear();
    cout << "***Reserve (Resize) 2\n\n";
    d.reserve(2);
    d.display();
    d.ddisplay();

    cout << "***Jump 5 INTS (1...5)\n\n";
    for (int i = 1; i <= 5; i++) {
        d.jump(i);
    }

    d.display();
    d.ddisplay();

    cout << "***Enqueue 4 INTS (1..4)\n\n";
    for (int i = 6; i <= 9; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();

    cout << "---------------------------------------------------\n\n\n";
}

void test4() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 4\n\n";
    cout << "*Instantiate Empty CHAR Deque\n\n";
    Deque<char> d;

    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    cout << "\n***Enqueue 7 CHARS (a, b, c, d, e, f, g)\n\n";
    for (int i = 0; i <= 6; i++) {
        d.enqueue(alpha[i]);
    }
    d.display();
    d.ddisplay();

    cout << "***Jump 10 CHARS ('0' - '9')\n\n";
    for (int i = 0; i <= 6; i++) {
        d.jump(num[i]);
    }

    d.display();
    d.ddisplay();

    cout << "***Eject 11 CHARS\n\n";
    for (int i = 0; i <= 12; i++) {
        d.eject();
    }
    d.display();
    d.ddisplay();

    cout << "\n***Instantiate Empty CHAR Deque\n\n";
    Deque<string> d2;
    d2.display();

    cout << "***Enqueue \"good\", \"day\" \n\n";
    d2.enqueue("good");
    d2.enqueue("day");
    d2.display();
    d2.ddisplay();

    cout << "***Jump \"have\", \"A\" \n\n";
    d2.jump("have");
    d2.jump("A");
    d2.display();
    d2.ddisplay();

    cout << "***Eject once THEN Enqueue\"morning\" 5 times\n\n";
    d2.eject();
    for (int i = 0; i < 5; i++) {
        d2.enqueue("morning");
    }
    d2.display();
    d2.ddisplay();

    cout << "---------------------------------------------------\n\n\n";
}

void test5() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 5\n\n";
    cout << "*Instantiate Empty INT Deque\n\n";
    Deque<int> d;
    d.display();
    d.ddisplay();

    cout << "\n***Dequeue from the Empty deque\n\n";
    d.dequeue();
    d.display();
    d.ddisplay();

    cout << "***Eject from the Empty deque\n\n";
    d.eject();
    d.display();
    d.ddisplay();

    cout << "---------------------------------------------------\n\n\n";

}

int main( )
{
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}