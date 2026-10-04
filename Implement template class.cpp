#include <iostream>
using namespace std;
template<class T>
class Sample {
    T value;
public:
    Sample(T v){ value=v; }
    void display(){ cout<<"Value = "<<value; }
};
int main(){
    Sample<int> s1(10);
    Sample<float> s2(5.5);
    s1.display();
    cout<<endl;
    s2.display();
    return 0;
}
