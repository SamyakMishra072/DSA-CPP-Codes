#include <bits/stdc++.h>
using namespace std;

int main() {
    //we use vectors when speicific container size is now known beforehand.
    vector <int> v; //initiliaze a vector.
    v.push_back(1); //adding "1" to it.
    v.emplace_back(2);
    vector <pair<int,int>>vec; //vec=vector of a pair.
    vec.push_back({1,2}); //it needs curly braces.
    vec.emplace_back(100,200); //no extra curly braces are needed.
    vector <int> v(400,121); //this is also allowed.





    return 0;
}