#include <bits/stdc++.h>
using namespace std;

int main() {
   list<int>l;
   l.push_back(2);
   l.emplace_back(4);
   l.push_front(5);  //push_front() is more cheaper than push_back().
   l.emplace_front(225);
   l.emplace_front(101);
   for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

return 0;
}
//rest all the functions are same as that of an pair and vector.