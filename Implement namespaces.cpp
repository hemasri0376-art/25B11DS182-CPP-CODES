#include <iostream>
using namespace std;
namespace First { int x=10; }
namespace Second { int x=20; }
int main() {
    cout<<"First x = "<<First::x<<endl;
    cout<<"Second x = "<<Second::x<<endl;
    return 0;
}
