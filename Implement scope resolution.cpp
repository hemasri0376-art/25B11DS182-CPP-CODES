#include <iostream>
using namespace std;
int x=100;
class Demo {
    int x;
public:
    void setData(int);
    void display();
};
void Demo::setData(int x) { this->x=x; }
void Demo::display() {
    cout<<"Local x = "<<x<<endl;
    cout<<"Global x = "<<::x<<endl;
}
int main() {
    Demo d;
    d.setData(50);
    d.display();
    return 0;
}
