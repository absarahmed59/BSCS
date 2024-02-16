#include <iostream>
using namespace std;

class Result {
  int m1, m2, m3;

public:
  Result(int a, int b, int c) {
    m1 = a;
    m2 = b;
    m3 = c;
  }
  Result(Result r1, Result r2) {
    cout << "Subject 01: " << r1.m1 + r2.m1 << endl;
    cout << "Subject 02: " << r1.m2 + r2.m2 << endl;
    cout << "Subject 03: " << r1.m3 + r2.m3 << endl;
  }
};

void Object_Parameter() {
  Result first_year(10, 20, 30), second_year(30, 40, 50);
  Result Total(first_year, second_year);
}