#include <iostream>
using namespace std;
class Number {
    int x;
public:
    Number(int n) { 
      x=n; 
    }
    void operator++() { 
      ++x; 
    }
    void display() { 
      cout<<"Value = "<<x; 
    }
};
int main() {
    Number n(10);
    ++n;
    n.display();
    return 0;
}
