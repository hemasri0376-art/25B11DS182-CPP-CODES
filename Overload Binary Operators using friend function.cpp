#include <iostream>
using namespace std;
class Number {
    int x;
public:
    Number(int n=0) { x=n; }
    friend Number operator+(Number,Number);
    void display() { cout<<"Result = "<<x; }
};
Number operator+(Number a,Number b) {
    return Number(a.x+b.x);
}
int main() {
    Number n1(10),n2(20);
    Number n3=n1+n2;
    n3.display();
    return 0;
}
