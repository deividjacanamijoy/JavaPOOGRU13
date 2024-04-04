#include <iostream>
using namespace std;

class MyClass {
public:
  int x;

private:
  int y;

public:
  void setY(int s) { y = s; }

  int getY() { // Corregido el nombre del método
    return y;
  }
};

   int main() {
  MyClass myObj;
  myObj.x = 25;
  myObj.setY(50);
  cout << "este es x = " << myObj.x << endl;
  cout << "este es y = " << myObj.getY()
       << endl; // Corregido el llamado al método
  return 0;
}