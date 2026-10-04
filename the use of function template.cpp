#include <iostream>
using namespace std;
template<class T>
T maximum(T a,T b){
    return (a>b)?a:b;
}
int main(){
    cout<<"Maximum = "<<maximum(10,20)<<endl;
    cout<<"Maximum = "<<maximum(5.5,2.3);
    return 0;
}
