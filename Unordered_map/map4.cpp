// check if a key Exists in the Unordered map 

#include<iostream>
#include<unordered_map>
using namespace std; 

int main() {
    unordered_map<int, string> student{
        { 111, "John" }, 
        { 132, "Mark" }, 
        { 143, "Chris" }
    };
    
    cout << "Using find() : " << endl;
    cout << "Does is " << 143 << "Exists?" ;
    
    // find() returns student.end() if the key is not found
    if(student.find(143) != student.end()) {
        cout << "yes"; 
    } 
    else {
        cout << "No";
    }
    
    cout << "\n\n Using count():" << endl;
    cout << "Does id " << 1433 << "Exists?";
    
    if(student.count(1433)) {
        cout << "yes";
    }
    else {
        cout << "No";
    }
    
    return 0;
}