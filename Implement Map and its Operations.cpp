#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> students;
    students[101]="Hema";
    students[102]="Ravi";
    students[103]="Priya";
    cout<<"Students:\n";
    for(auto x:students)
        cout<<x.first<<" "<<x.second<<endl;
    if(students.find(102)!=students.end())
        cout<<"Student 102 found\n";
    students.erase(103);
    cout<<"\nAfter deletion:\n";
    for(auto x:students)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
