// remove elements from an unordered map 

#include<iostream>
#include<unordered_map>
using namespace std; 

// function prototype for display_unordered_map()
void display_unordered_map(const unordered_map<int, string> &);

int main() {
    unordered_map<int, string> student {
        { 111, "John" },
        { 132, "Mark" }, 
        { 143, "Chris" }
    };
    
    cout << "initial unordered map: \n"; 
    display_unordered_map(student);
    
    
    
    return 0;
}


// utility function to print unordered_map elements

void display_unordered_map(const unordered_map<int, string> &umap) {
    
    for (const auto& key_value: umap) {
        int key = key_value.first;
        string value = key_value.second; 
        
        cout << key << " - " << value << endl ;
    }
}