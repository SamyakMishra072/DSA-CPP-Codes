#include <bits/stdc++.h>
using namespace std;

int main() {
    // We use vectors when the specific container size is **not** known beforehand.
    vector<int> v; // Initialize an empty vector.

    v.push_back(1); // Adding "1" to the vector (uses copy/move operation).

    v.emplace_back(2); // Adding "2" to the vector (constructs in-place, more efficient).

    vector<pair<int, int>> vec; // `vec` is a vector of pairs.

    vec.push_back({1, 2}); // Adding a pair (1, 2) to the vector. Requires curly braces.

    vec.emplace_back(100, 200); // Adding a pair (100, 200) to the vector. No extra curly braces are needed.

    vector<int> v1(400, 121); // Creates a vector of size 400, with all elements initialized to 121.

    vector<int> v2(5); // Creates a vector of size 5, with all elements default-initialized to 0.

    return 0;
}
