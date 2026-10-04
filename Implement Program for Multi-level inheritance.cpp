#include <iostream>
using namespace std;
class GrandParent {
public:
    void showGrandParent() { cout<<"GrandParent"<<endl; }
};
class Parent:public GrandParent {
public:
    void showParent() { cout<<"Parent"<<endl; }
};
class Child:public Parent {
public:
    void showChild() { cout<<"Child"; }
};
int main() {
    Child c;
    c.showGrandParent();
    c.showParent();
    c.showChild();
    return 0;
}
