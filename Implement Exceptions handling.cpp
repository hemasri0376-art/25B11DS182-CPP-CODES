#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try{
        if(b==0) throw b;
        cout<<"Result = "<<(float)a/b;
    }
    catch(int){
        cout<<"Division by zero is not allowed";
    }
    return 0;
}
