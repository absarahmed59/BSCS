#include <iostream>
using namespace std;

class Object {
public:
  int data;
  Object(int num) {
    data = num;
    cout << "Constructor called with data: " << data << endl;
  }
  Object() { cout << "Constructor called with data: " << data << endl; }
};

void Object_Copy() {
  Object obj1(100);
  Object obj2 = obj1; // invoking copy constructor
  // Object obj3(obj1);  // invoking copy constructor
}