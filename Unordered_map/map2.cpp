// change values of an Unordered Map

#include<iostream> 
#include<unordered_map> 
using namespace std; 

int main() {
    unordered_map<string, string> capital_city {
        { "India", "Calcutta" }, 
        { "Pakistan", "Karachi" },
    };
    
    cout << "Old capitals : " << endl;
    cout << "India : " << capital_city["India"] <<endl;
    cout << "India : " << capital_city["Pakistan"];
    
    // change value for "India" using []
    capital_city.at("Pakistan") = "Islamabad";
    
    cout << "\n\n New Capitals : " << endl;
    cout << "India : " << capital_city["India"] << endl;
    cout << "Pakistan : " << capital_city["Pakistan"];
    
    return 0;
    
    }
    