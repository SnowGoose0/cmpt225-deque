#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

template <typename Object>
class Deque 
{
  public:
    Deque()
      {  
         theCapacity = 8 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         front = 0 ; 
         back = 0 ; 
      }
      
    ~Deque( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }
    void clear( ){
        // remove all contents and reset the capacity to it's initial value 
        // 
        // Implement this...

        int length = theSize + theCapacity;

        for (int i = 0; i < length; i++) {
          objects[i] = NULL;
        }
        
        theCapacity = length;
    }

    void reserve( int newCapacity )
    {
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        // 
        // Implement this...

        if (newCapacity > theSize) {
          Object* newArr = new Object[newCapacity];
          int length = theSize + theCapacity;
          for (int i = 0; i < length; i++) {
            newArr[i] = objects[i];
          }
          theCapacity = newCapacity;
          Object* tmp = objects;
          objects = newArr;
          delete[] tmp;
        }
    }

    // Operations 

    void enqueue( const Object & x )// Insert a new object at the back 
    {
        if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );
        objects[ back ] = x ; 
        back = (back+1) % theCapacity ;
        theSize++ ;
    }

    void jump( const Object & x )// Insert a new object at the front 
    {
        // Implement this 
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front];
        front = (front+1) % theCapacity ;
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
        // Implement this 
    }

    void display() const // print out the contents of the deque
    {
       // Implement this.  The output should be similar to that 
       // used in the Vector and Stack classes provided.
    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
        // Implement this.  The output should be in the style used in 
        // Vector and Stack classes provided.
    }


  private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object * objects;
};

#endif
