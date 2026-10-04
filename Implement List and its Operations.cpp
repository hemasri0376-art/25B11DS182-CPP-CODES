#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(20);
    l.push_back(30);
    l.push_front(10);
    cout<<"List: ";
    for(int x:l) cout<<x<<" ";
    l.pop_front();
    l.pop_back();
    cout<<"\nAfter deletion: ";
    for(int x:l) cout<<x<<" ";
    return 0;
}
