#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area()=0;
};
class Rectangle:public Shape {
    int l,b;
public:
    Rectangle(int x,int y){ l=x; b=y; }
    void area(){ cout<<"Rectangle Area = "<<l*b<<endl; }
};
class Circle:public Shape {
    float r;
public:
    Circle(float x){ r=x; }
    void area(){ cout<<"Circle Area = "<<3.14*r*r<<endl; }
};
int main() {
    Rectangle r(10,5);
    Circle c(5);
    r.area();
    c.area();
    return 0;
}
