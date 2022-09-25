#include "Deque.h"
#include <iostream>
using namespace std;

int main( )
{
    Deque <int> d;
    d.display();
    d.ddisplay();
    
    for (int i = 1; i < 13; i++) {
        d.jump(-i);
    }

    d.display();
    d.ddisplay();

    int x = d[2];
    int y = d[7];

    cout << "d[2]: " << x << "\n";
    cout << "d[34]: " << y << "\n";


    return 0;
}