C++ Program
#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    void display(){ cout<<"Roll = "<<roll; }
};
int main() {
    Student s;
    Student *ptr=&s;
    ptr->roll=101;
    ptr->display();
    return 0;
}
