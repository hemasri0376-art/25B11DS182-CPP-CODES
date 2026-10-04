#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<"Vector: ";
    for(int x:v) cout<<x<<" ";
    cout<<"\nSize = "<<v.size();
    v.pop_back();
    cout<<"\nAfter pop_back: ";
    for(int x:v) cout<<x<<" ";
    return 0;
}
