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

    vector<int> v1(11, 121); // Creates a vector of size 400, with all elements initialized to 121.

    vector<int> v2(5); // Creates a vector of size 5, with all elements default-initialized to 0.
    //vector is dynamic in nature.// indexing is similar as that of arrays.
    vector<int>v7(5,20); //Result: v7 = {20, 20, 20, 20, 20}.
    vector <int>v4(v7);  //This initializes a vector v4 by copying all the elements of v1.
//Use of iterators.
    /*
    for (vector<int>::iterator it=v.begin();it!=v.end();it++) {
        cout<<*(it)<<" ";
    }
    */
    //ALTERNATIVE METHOD (better approach)
    for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
    }
    cout<<endl;
    cout<<"REVERSE TRAVERSAL"<<endl;
    //auto automatically deduces the type of it, making the code more concise.
    //auto it=v.rend();//Returns a reverse iterator pointing 
    //to the theoretical element preceding the first element of the vector.
    //auto it=v.rbegin(); //Returns a reverse iterator pointing to the last element of the vector v.
    //REVERSE WAY
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
    cout << *it << " ";
    }
    //rend(); never used. may skip it.











    cout<<endl;






    return 0;
}
