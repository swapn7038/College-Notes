// Cpp vectors

#include<iostream>
#include<vector> 
using namespace std; 

int main() {
    vector<int> arr;
    
    cout << "size :" <<arr.size() << endl;
    cout << "capacity:" << arr.capacity() << endl;
    
    arr.push_back(1);
    
    cout << "size :" << arr.size() << endl;
    cout << "Capavity:" << arr.capacity() << endl;
    
    arr.push_back(2);
    
    cout << "size :" << arr.size() << endl;
    cout << "capacity :" << arr.capacity() << endl;
    
    arr.resize(10);
    
    cout << "size :" << arr.size() << endl;
    cout << "capacity :" << arr.capacity() << endl;
    
    arr.resize(100);
    
    cout << "size :" << arr.size() << endl;
    cout << "capacity :" << arr.capacity() << endl;
    
    arr.pop_back();
    arr.pop_back();
    
    cout << "after pop back size :" << arr.size() << endl;
    cout << "after pop back capacity :" << arr.capacity() << endl;
    
    return 0;
}