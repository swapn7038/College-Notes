// Unorder maps program 

#include<iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> capital_city {
        { "Nepal", "Kathmandu" }, 
        { "India", "New Delhi" }, 
        { "Australia", "Csnberra" }
    };
    
    
        cout << "Capital of Nepal is " << capital_city["Nepal"] << endl; 
        cout << "Capital of Auatralia is " << capital_city.at("Auatralia") << endl;
        
        return 0;
    
}

// https://www.programiz.com/cpp-programming/unordered-map