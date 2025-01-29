#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>st;  //LIFO 
    st.push(1); //1
    st.push(2);  //2,1
    st.push(8); //8,2,1
    st.emplace(0); //0,8,2,1
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    stack<int>st1,st2;
    st1.swap(st2);

    return 0;
}