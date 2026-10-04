#include <iostream>
using namespace std;
class Sample {
    int x;
public:
    Sample() { x=100; }
    friend void display(Sample);
};
void display(Sample s) {
    cout<<"Value = "<<s.x;
}
int main() {
    Sample s;
    display(s);
    return 0;
}
