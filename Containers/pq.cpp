#include <bits/stdc++.h>
using namespace std;

int main() {
    //MAXIMUM HEAP
    priority_queue<int>pq;
    pq.push(1); // 1
    pq.push(5); // 1 5
    pq.push(4); // 5 4 1
    pq.emplace(0); // 5 4 1 0
    cout<<pq.top()<<endl; // top() function prints the largest element.
    //SWAP function as normally.
    //MINIMUM HEAP
    priority_queue<int,vector<int>,greater<int>>pqr;
    pqr.push(7); //7
    pqr.push(2); //2 7
    cout<<pqr.top()<<endl; //2 gets printed.f

    return 0;
}