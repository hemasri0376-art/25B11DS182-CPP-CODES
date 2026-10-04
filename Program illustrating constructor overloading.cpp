#include <iostream>
using namespace std;
class Student {
    int roll;
    string name;
public:
    Student() { roll=0; name="Unknown"; }
    Student(int r) { roll=r; name="Unknown"; }
    Student(int r,string n) { roll=r; name=n; }
    void display() { cout<<roll<<" "<<name<<endl; }
};
int main() {
    Student s1;
    Student s2(101);
    Student s3(102,"Hema");
    s1.display(); s2.display(); s3.display();
    return 0;
}
