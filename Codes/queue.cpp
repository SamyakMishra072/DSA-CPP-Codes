#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int>q;
    q.push(1); // 1
    q.push(2); //1 2
    q.emplace(6); // 1 2 6
    q.back() +=5; // 1 2 11
    cout<<q.back()<<endl; // 11
    q.pop(); // 1 gets removed.
    //q.pop(); // 2 gets popped out
    //q.pop(); 11 gets removed.
    cout<<q.back()<<endl; //1
    //cout<<q.front()<<endl; 
    q.swap(q); //no change for this case.
    cout<<q.size()<<endl; // 2
    return 0;
}