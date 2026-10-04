#include <iostream>
using namespace std;
inline int square(int n) { return n*n; }
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Square = "<<square(n);
    return 0;
}
