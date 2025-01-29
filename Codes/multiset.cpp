#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int>ms;
    //multiset is a sorted set .
    //same as set but can allso store duplicate elements.
    ms.insert(1);
    ms.insert(8);
    ms.insert(2);
    ms.insert(8);
    ms.erase(1); //all 1's erased. //2,8,8
    int count=ms.count(8); // count the no of occurences of 8 and finally store it in count variable.
    //count =2.
    ms.erase(ms.find(2)); //ms.erase(iterator) removes only one occurrence of 2.
    // 8,8
    return 0;
}