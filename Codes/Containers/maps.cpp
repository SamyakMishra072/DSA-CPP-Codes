#include <bits/stdc++.h>
using namespace std;

int main() {
    // Map with integer keys and integer values
    map<int, int> m1;

    // Insert key-value pair into m1
    m1[1] = 2;  // m1 = { {1, 2} }
    
    // Insert key-value pair using emplace
    m1.emplace(3, 1);  // m1 = { {1, 2}, {3, 1} }
    
    // Corrected insert statement
    m1.insert({2, 4}); // m1 = { {1, 2}, {2, 4}, {3, 1} }

    // Print the map contents
    for (auto it : m1) {
        cout << it.first << "---> " << it.second <<" "<<endl;
    }

    // Accessing elements
    cout << m1[1] << endl; // Outputs 2
    cout << m1[5] << endl; 
    // Outputs 0 (default-initialized since key 5 does not exist)
    auto it7=m1.lower_bound(1);
    auto it6=m1.upper_bound(2);
//In maps duplicate keys are also allowed to store.
    return 0;
}
