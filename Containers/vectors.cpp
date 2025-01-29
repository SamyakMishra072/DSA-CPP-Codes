#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize a vector 'v' with 3 elements, each set to 100.
    vector<int> v(3, 100); // v = {100, 100, 100}

    // Insert 300 at the beginning of 'v'.
    v.insert(v.begin(), 300); // v = {300, 100, 100, 100}

    // Insert two elements with the value 10 starting at position 1.
    v.insert(v.begin() + 1, 2, 10); // v = {300, 10, 10, 100, 100, 100}

    // Initialize a vector 'copy' with 2 elements, each set to 50.
    vector<int> copy(2, 50); // copy = {50, 50}

    // Insert elements from 'copy' at the beginning of 'v'.
    v.insert(v.begin(), copy.begin(), copy.end()); // v = {50, 50, 300, 10, 10, 100, 100, 100}

    // Output the size of 'v'.
    cout << v.size(); // Outputs: 8

    // Remove the last element of 'v'.
    v.pop_back(); // v = {50, 50, 300, 10, 10, 100, 100}

    // Swap the contents of 'v' with itself (no effect).
    v.swap(v); // v remains unchanged

    // Clear all elements from 'v'.
    v.clear(); // v is now empty

    // Check if 'v' is empty and output the result.
    cout << v.empty() << endl; // Outputs: 1 (true)

    return 0;
}
