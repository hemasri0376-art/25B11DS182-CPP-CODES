#include <iostream>
using namespace std;
void display(int a,int b=20) {
    cout<<"Sum = "<<a+b<<endl;
}
int main() {
    display(10);
    display(10,30);
    return 0;
}
