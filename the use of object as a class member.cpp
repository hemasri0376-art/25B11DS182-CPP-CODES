#include <iostream>
using namespace std;
class Address {
public:
    void display(){ cout<<"India"<<endl; }
};
class Student {
    Address addr;
public:
    void show(){
        cout<<"Student Address: ";
        addr.display();
    }
};
int main() {
    Student s;
    s.show();
    return 0;
}
