#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;

    // Inserting elements into the set (unique and sorted order)
    st.insert(0);
    st.emplace(8);
    st.insert(4);
    st.insert(1);
    st.insert(1); // Duplicate 1 won't be stored
    st.insert(12);
    st.insert(9);

    // Finding an element (3 is not present, so it returns st.end())
    auto it = st.find(3);
    if (it != st.end()) {  // FIX: Prevent erasing an invalid iterator
        st.erase(it);
    }

    // Erasing an element by value (O(log N))
    st.erase(12); // Removes 12 from the set

    // Checking the number of occurrences of an element (always 0 or 1 for set)
    int cnt = st.count(1); // Returns 1 since 1 is present

    // Attempting to erase an element that is not present
    //auto it4 = st.find(3);
    //if (it4 != st.end()) {  // FIX: Only erase if element exists
      //  st.erase(it4);
    //}

    // Finding iterators for elements
    auto it1 = st.find(8); // Iterator pointing to 8
    auto it2 = st.find(4); // Iterator pointing to 4

    // FIX: Ensure valid iterators and correct order before erasing range
    //if (it1 != st.end() && it2 != st.end() && distance(it1, it2) > 0) {
      //  st.erase(it1, it2);
   // }

    // Finding the first element that is >= 0
    //auto it6 = st.lower_bound(0); // Points to 0

    // Finding the first element that is > 8
    //auto it7 = st.upper_bound(8); // Points to 9

    return 0;
}
