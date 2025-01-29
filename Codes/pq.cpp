#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int>pq;
    pq.push(1); // 1
    pq.push(5); // 1 5
    pq.push(4); // 5 4 1
    pq.emplace(0); // 5 4 1 0
    cout<<pq.top()<<endl; // top() function prints the largest element.
    //SWAP function as normally.
    






    return 0;
}