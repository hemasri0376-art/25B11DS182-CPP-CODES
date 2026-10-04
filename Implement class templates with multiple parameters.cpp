#include <iostream>
using namespace std;
template<class T1,class T2>
class Sample {
    T1 a;
    T2 b;
public:
    Sample(T1 x,T2 y){ a=x; b=y; }
    void display(){
        cout<<"First value = "<<a<<endl;
        cout<<"Second value = "<<b<<endl;
    }
};
int main(){
    Sample<int,float> s(10,20.5);
    s.display();
    return 0;
}
