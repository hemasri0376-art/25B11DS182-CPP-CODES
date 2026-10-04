#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(20);
    d.push_front(10);
    d.push_back(30);
    cout<<"Deque: ";
    for(int x:d) cout<<x<<" ";
    d.pop_front();
    d.pop_back();
    cout<<"\nAfter deletion: ";
    for(int x:d) cout<<x<<" ";
    return 0;
}
