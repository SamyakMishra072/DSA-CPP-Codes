#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int>ms;
    //same as set but can allso store duplicate elements.
    ms.insert(1);
    ms.insert(8);
    ms.insert(2);
    ms.insert(8);
    ms.erase(1); //all 1's erased.
    int count=ms.count(8); // count the no of occurences of 8 and finally store it in count variable.
    ms.erase(ms.find(2));
    return 0;
}