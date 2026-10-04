#include <iostream>
using namespace std;
class Number {
    int x;
public:
    Number(int n=0) { x=n; }
    Number operator+(Number n) { return Number(x+n.x); }
    void display() { cout<<"Result = "<<x; }
};
int main() {
    Number n1(10),n2(20),n3;
    n3=n1+n2;
    n3.display();
    return 0;
}
