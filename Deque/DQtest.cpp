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
    cout << endl << endl;

    cout << "\n***Enqueue INTS 1-5\n\n";
    for (int i = 1; i <= 5; i++) {
        d.enqueue(i);
    }
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Dequeue 3 INTS\n\n";
    for (int i = 1; i <= 3; i++) {
        int x = d.dequeue();
        cout << "dequeued: " << x << "\n";
    }
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Jump 2 INTS (-1 and -2)\n\n";
    for (int i = 1; i <= 2; i++) {
        d.jump(-i);
    }
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Eject 2 INTS\n\n";
    for (int i = 1; i <= 2; i++) {
        int x = d.eject();
        cout << "ejected: " << x << "\n";
    }
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Reserve 19 (Expand the Deque to 19 slots)\n\n";
    d.reserve(19);
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Clear the Deque\n\n";
    d.clear();
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "---------------------------------------------------\n\n\n";

}

void test2() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 2\n\n";
    cout << "*Instantiate Empty Deque\n\n";
    Deque<int> d;
    d.display();
    cout << endl << endl;

    cout << "\n***Enqueue 6 INTS (1-6) THEN Dequeue 4 INTS\n\n";
    for (int i = 1; i <= 6; i++) {
        d.enqueue(i);
    }

    for (int i = 0; i < 4; i++) {
        d.dequeue();
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Enqueue 6 INTS (-101...-106)\n\n";
    for (int i = 101; i <= 106; i++) {
        d.enqueue(-i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Eject 6 INTS\n\n";
    for (int i = 1; i <= 6; i++) {
        int x = d.eject();
        cout << "ejected: " << x << "\n";
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    d.clear();
    cout << "***Clear the Deque\n\n";
    d.display();
    cout << endl << endl;

    cout << "\n***Jump 5 INTS (1-5) THEN Eject 3 INT\n\n";
    for (int i = 1; i <= 5; i++) {
        d.jump(i);
    }
    d.eject();
    d.eject();
    d.eject();
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "\n***Jump 6 INTS (-201...-206)\n\n";
    for (int i = 201; i <= 206; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Dequeue 5 INTS\n\n";
    for (int i = 1; i <= 5; i++) {
        int x = d.dequeue();
        cout << "dequeued: " << x << "\n";
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "---------------------------------------------------\n\n\n";

}

void test3() {
        cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 3\n\n";
    cout << "*Instantiate Empty Deque\n\n";
    Deque<int> d;
    d.display();
    cout << endl << endl;

    cout << "***Enqueue 8 INTS (1-8)\n\n";
    for (int i = 1; i <= 8; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Enqueue 5 INTS (401-405) \n\n";
    for (int i = 401; i <= 405; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;


    cout << "***Jump 4 INTS (-1 ... -4)\n\n";
    for (int i = 1; i <= 4; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Jump 5 INTS (-101 ... -105)\n\n";
    for (int i = 101; i <= 105; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Clear and Reset List\n\n";
    d.clear();
    d.display();
    d.ddisplay();
    cout << endl << endl;


    cout << "***Jump 8 INTS (-1 ... -8)\n\n";
    for (int i = 1; i <= 8; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Jump 5 INTS (-100 ... -8104)\n\n";
    for (int i = 100; i <= 104; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Enqueue 4 INTS (1 ... 4)\n\n";
    for (int i = 1; i <= 4; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Enqueue 5 INTS (995 ... 999)\n\n";
    for (int i = 995; i <= 999; i++) {
        d.enqueue(i);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

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
    cout << endl << endl;

    cout << "***Jump 6 CHARS ('0' - '9')\n\n";
    for (int i = 0; i <= 6; i++) {
        d.jump(num[i]);
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Dequeue 4 CHARS \n\n";
    for (int i = 0; i <= 3; i++) {
        char c =d.dequeue();
        cout << "dequeued: " << c << "\n";
    }

    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "***Eject 10 CHARS\n\n";
    for (int i = 0; i <= 9; i++) {
        char c = d.eject();
        cout << "ejected: " << c << "\n";
    }
    d.display();
    d.ddisplay();
    cout << endl << endl;

    cout << "\n***Instantiate Empty CHAR Deque\n\n";
    Deque<string> d2;
    d2.display();

    cout << "***Enqueue \"good\", \"day\" \n\n";
    d2.enqueue("good");
    d2.enqueue("day");
    d2.display();
    d2.ddisplay();
    cout << endl << endl;

    cout << "***Jump \"have\", \"A\" \n\n";
    d2.jump("have");
    d2.jump("A");
    d2.display();
    d2.ddisplay();
    cout << endl << endl;

    cout << "***Eject once THEN Enqueue\"morning\" 5 times\n\n";
    string str = d2.eject();
    cout << "ejected: " << str << "\n";
    for (int i = 0; i < 5; i++) {
        d2.enqueue("morning");
    }
    d2.display();
    d2.ddisplay();
    cout << endl << endl;

    cout << "***Dequeue 4 times\n\n";
    d2.eject();
    for (int i = 0; i < 4; i++) {
        string x = d2.dequeue();
        cout << "dequeued: " << x << "\n";
    }
    d2.display();
    d2.ddisplay();
    cout << endl << endl;

    cout << "---------------------------------------------------\n\n\n";
}


int main( )
{
    test1();
    test2();
    test3();
    test4();
    return 0;
}