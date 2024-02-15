#include <iostream>
using namespace std;

class Dest_01 {
public:
  Dest_01() { cout << "Constructor 01 called" << endl; }
  void Method() { cout << "Method 01 Called" << endl; }
  ~Dest_01() { cout << "Destructor 01 called" << endl; }
};
class Dest_02 {
public:
  Dest_02() { cout << "Constructor 02 called" << endl; }
  void Method() { cout << "Method 02 Called" << endl; }
  ~Dest_02() { cout << "Destructor 02 called" << endl; }
};

void Destructor_Nested() {
  Dest_01 obj1;
  Dest_02 obj2;
  Dest_02 obj3;
  Dest_01 obj4;
  obj1.Method();
  obj2.Method();
  obj1.Method();
  obj1.Method();
  obj2.Method();
}