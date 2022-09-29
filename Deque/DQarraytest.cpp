#include "Deque.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void test1() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 1\n\n";
    cout << "*Instantiate Empty Deque: d\n\n";
    Deque<int> d;

    cout << "\n***Jump 13 random INTS (range: 0 - 99) into d using rand() function\n\n";

    srand (time(NULL));
    for (int i = 0; i < 13; i++) {
        d.jump(rand() % 100);
    }

    d.display();
    d.ddisplay();

    int idx = rand() % 13;
    int val = d[idx];

    cout << "***Choose Random Indices within the range of d (0 - 12) and retrieve their values\n Re-run this program for different indices\n\n";
    cout << "The value at d[" << idx << "] = " << val << "\n";

    idx = rand() % 13;
    val = d[idx];
    cout << "The value at d[" << idx << "] = " << val << "\n";

    idx = rand() % 13;
    val = d[idx];
    cout << "The value at d[" << idx << "] = " << val << "\n";

    idx = rand() % 13;
    val = d[idx];
    cout << "The value at d[" << idx << "] = " << val << "\n";


}

void test2() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 2\n\n";
    cout << "*Instantiate Empty Deque: d\n\n";
    Deque<int> d;

    cout << "\n***Enqueue 13 random INTS (range: 0 - 99) into d \n\n";

    srand(time(NULL));
    for (int i = 0; i < 13; i++) {
        d.enqueue(rand() % 100);
    }

    d.display();
    d.ddisplay();

    int idx = rand() % 13;
    int val = rand() % 100;

    cout << "***Choose Random Indices within the range of d (0 - 12) and set their values to random INTS (range: 1-99)\n Re-run this program for different indices\n\n";
    cout << "Set the value at d[" << idx << "] to " << val << "\n";

    d[idx] = val;

    idx = rand() % 13;
    val = rand() % 100;

    cout << "Set the value at d[" << idx << "] to " << val << "\n";

    d[idx] = val;

    idx = rand() % 13;
    val = rand() % 100;

    cout << "Set the value at d[" << idx << "] to " << val << "\n";

    d[idx] = val;

    idx = rand() % 13;
    val = rand() % 100;

    cout << "Set the value at d[" << idx << "] to " << val << "\n";

    d[idx] = val;

    idx = rand() % 13;
    val = rand() % 100;

    cout << "Set the value at d[" << idx << "] to " << val << "\n\n";

    d[idx] = val;

    d.display();
    d.ddisplay();

}

void test3() {
    cout << "\n\n";
    cout << "---------------------------------------------------\n";
    cout << "TEST - 3\n\n";
    cout << "*Instantiate Empty CHAR Deque: dc\n\n";
    Deque<char> dc;

    srand(time(NULL));
    cout << "\n***Enqueue random chars into dc\n\n";
    for (int i = 0; i < 9; i++) {
        dc.enqueue((char)(97 + (rand() % 26))); 
    }

    dc.display();
    dc.ddisplay();

    cout << "***Retrieve values at random indices and set them to something random\n\n";
    
    int idx = rand() % 9;
    char curChar = dc[idx];
    char newChar = (char)(97 + (rand() % 26));
    cout << "The current char at dc[" << idx << "] is " << "'" << curChar << "' -> Set dc[" << idx << "] to " << "'" << newChar << "'\n";

    dc[idx] = newChar;

    idx = rand() % 9;
    curChar = dc[idx];
    newChar = (char)(97 + (rand() % 26));
    cout << "The current char at dc[" << idx << "] is " << "'" << curChar << "' -> Set dc[" << idx << "] to " << "'" << newChar << "'\n";

    dc[idx] = newChar;

    idx = rand() % 9;
    curChar = dc[idx];
    newChar = (char)(97 + (rand() % 26));
    cout << "The current char at dc[" << idx << "] is " << "'" << curChar << "' -> Set dc[" << idx << "] to " << "'" << newChar << "'\n\n";

    dc[idx] = newChar;

    dc.display();
    dc.ddisplay();


    cout << "\n\n\n";
    cout << "*Instantiate Empty String Deque: ds\n\n";
    Deque<string> ds;

    cout << "***Enqueue Strings: 'hello' 'world' 'good' 'morning' 'afternoon' 'evening' 'night'\n\n";
    ds.enqueue("hello");
    ds.enqueue("world");
    ds.enqueue("good");
    ds.enqueue("morning");
    ds.enqueue("afternoon");
    ds.enqueue("evening");
    ds.enqueue("night");

    ds.display();
    ds.ddisplay();

    cout << "***Retrieve strings at random indices and set them to 'bruh'\n\n";
    
    int idxx = rand() % 7;
    string curStr = ds[idxx];
    string newString = "bruh";
    cout << "The current string at ds[" << idxx << "] is " << "'" << curStr << "' -> Set ds[" << idxx << "] to " << "'" << newString << "'\n";

    ds[idxx] = newString;

    idxx = rand() % 9;
    curStr = ds[idxx];

    cout << "The current string at ds[" << idxx << "] is " << "'" << curStr << "' -> Set ds[" << idxx << "] to " << "'" << newString << "'\n";

    ds[idxx] = newString;

    idxx = rand() % 9;
    curStr = ds[idxx];

    cout << "The current string at ds[" << idxx << "] is " << "'" << curStr << "' -> Set ds[" << idxx << "] to " << "'" << newString << "'\n\n";

    idxx = rand() % 9;
    curStr = ds[idxx];


    ds.display();
    ds.ddisplay();

    cout << "---------------------------------------------------\n";

}

int main() {
    
    test1();
    test2();
    test3();
    return 0;
}