#include <iostream>
using namespace std;
class Student {
    int roll;
protected:
    int marks;
public:
    void setData() { roll=101; marks=90; }
    void display() {
        cout<<"Roll = "<<roll<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};
int main() {
    Student s;
    s.setData();
    s.display();
    return 0;
}
