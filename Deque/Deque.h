#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
#include <cmath>
using namespace std;

template <typename Object>
class Deque 
{
  public:
    Deque() {  
         theCapacity = 8;
         objects = new Object[ theCapacity ]; 
         theSize = 0;
         front = 0; 
         back = 0; 
      }
      
    ~Deque( )
      { delete [] objects; }

    bool empty() const { return size( ) == 0; }
    int size() const { return theSize; }
    void clear() {
        // remove all contents and reset the capacity to it's initial value 
        // 
        // Implement this...
        Object* tmp = objects;
        Object* newArr = new Object[8];
        delete [] tmp;
        objects = newArr;

        front = 0;
        back = 0;
        theSize = 0;

        for (int i = 0; i < 8; i++) {
          objects[i] = 0;
        }
        theCapacity = 8;
    }

    void reserve(int newCapacity) {
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        // 
        // Implement this...

        if (newCapacity > theSize) {
          Object* newArr = new Object[newCapacity];
          int length = theCapacity;
          
          if (theCapacity == theSize || back < front) {
            for (int i = front; i < theCapacity; i++) {
              newArr[i - front] = objects[i];
            }

            for (int i = 0; i < back; i++) {
              newArr[theCapacity - back + i] = objects[i]; 
            }
          } else {
            for (int i = front; i < back; i++) {
              newArr[i - front] = objects[i];
            }
          }

          front = 0;
          back = theSize;
          theCapacity = newCapacity;
          Object* tmp = objects;
          objects = newArr;
          delete[] tmp;
        }
    }

    // Operations 

    void enqueue(const Object &x) {// Insert a new object at the back 
        if(theSize == theCapacity) reserve((2 * theCapacity) + 1);
        objects[back] = x; 
        back = (back + 1) % theCapacity;
        theSize++;
    }

    void jump(const Object &x) {// Insert a new object at the front 
        // Implement this 

        if (theSize == theCapacity) reserve((2 * theCapacity) + 1);
        front = (theCapacity + ((front - 1) % theCapacity)) % theCapacity;
        objects[front] = x;
        theSize++;
    }

    Object dequeue() { // Remove and return the object at the front   
        Object temp = objects[front];
        if (theSize) {
          theSize--;
          front = (front + 1) % theCapacity;
        }
        return temp;
    }

    Object eject() { // Remove and return the object at the back 
        // Implement this 
        Object temp;
        if (back-1 < 0) {
          temp = objects[theCapacity - 1];
        } else {
          temp = objects[back-1];
        }
        if (theSize) {
          theSize--;
          back = (theCapacity + ((back - 1) % theCapacity)) % theCapacity;
        }
        return temp;
    }

    void display() const { // print out the contents of the deque
      // Implement this.  The output should be similar to that 
      // used in the Vector and Stack classes provided.
      cout << "size: " << theSize << ";\n";
      cout << "< ";
      if (theSize == theCapacity || back < front) {
        for (int i = front; i < theCapacity; i++) {
          cout << objects[i] << " ";
        }
 
        for (int i = 0; i < back; i++) {
          cout << objects[i] << " ";
        }
      } else {
        for (int i = front; i < back; i++) {
          cout << objects[i] << " ";
        }
      }
      cout << ">\n";

    }
      

    void ddisplay() const { // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
        // Implement this.  The output should be in the style used in 
        // Vector and Stack classes provided.

        cout << "capacity: " << theCapacity << "; ";
        cout << "size: " << theSize << "; ";
        cout << "front: " << front << "; ";
        cout << "back: " << back << ";\n";

        cout << "[ ";
        for (int i = 0; i < theCapacity; i++) {
          cout << i << "=" << objects[i] << ", ";
        }
        cout << "]" << "\n\n";
    }

    Object& operator[] (int index) const {
      int idx = 0;
      if (theSize == theCapacity || back < front) {
        if (index < theCapacity - front) {
          return objects[front + index];
        } else {
          index = index - (theCapacity - front);
          return objects[0 + index];
        }
      } else {
        if (index < back - front) { return objects[front + index]; }
      }
      return objects[0];
    }

  private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object* objects;
};

#endif
