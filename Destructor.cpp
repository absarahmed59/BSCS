#include <iostream>
using namespace std;

class Dest {
public:
  Dest() { cout << "Constructor called" << endl; }
  void Method() { cout << "Method Called" << endl; }
  ~Dest() { cout << "Destructor called" << endl; }
};

void Destructor() {
  Dest obj;
  obj.Method();
  obj.Method();
  obj.Method();
}