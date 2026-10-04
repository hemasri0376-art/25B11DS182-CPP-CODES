#include <iostream>
using namespace std;
class Parent {
public:
    void showParent() { cout<<"This is Parent class"<<endl; }
};
class Child:public Parent {
public:
    void showChild() { cout<<"This is Child class"; }
};
int main() {
    Child c;
    c.showParent();
    c.showChild();
    return 0;
}
