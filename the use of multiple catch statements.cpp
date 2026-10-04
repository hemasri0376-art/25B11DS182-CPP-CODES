#include <iostream>
using namespace std;
int main(){
    try{
        int choice;
        cout<<"Enter 1 for integer exception, 2 for character exception: ";
        cin>>choice;
        if(choice==1) throw 10;
        else throw 'A';
    }
    catch(int x){
        cout<<"Integer exception: "<<x;
    }
    catch(char x){
        cout<<"Character exception: "<<x;
    }
    return 0;
}
