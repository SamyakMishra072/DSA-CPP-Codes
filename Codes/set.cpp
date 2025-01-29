#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>st;
    st.insert(0);
    st.emplace(8);
    st.insert(4);
    st.insert(1);
    st.insert(1); //it won't store 1 again as Set Only Stores Unique and
    //Ordered Elements. 
    st.insert(12);
    st.insert(9);
    auto it=st.find(3);
    st.erase(12); // takes logarithmic amount of time.









return 0;
}