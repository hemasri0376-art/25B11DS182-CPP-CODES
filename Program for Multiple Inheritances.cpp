#include <iostream>
using namespace std;
class Father {
public:
    void showFather() { cout<<"Father class"<<endl; }
};
class Mother {
public:
    void showMother() { cout<<"Mother class"<<endl; }
};
class Child:public Father,public Mother {
public:
    void showChild() { cout<<"Child class"; }
};
int main() {
    Child c;
    c.showFather();
    c.showMother();
    c.showChild();
    return 0;
}
