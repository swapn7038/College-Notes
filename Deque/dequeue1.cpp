//  Deque 

#include<iostream>
#include<deque>
using namespace std; 

// function prototype
void display_cast(deque<int>);

int main() {
    
    // uniform initialization
    deque<int> deque1 {1, 2, 3, 4, 5};
    
    cout << "deque1 = "; 
    
    // display elements of dequeue1 
    for(int num: deque1) {
        cout << num << " , ";
    }
    
    return 0;
}