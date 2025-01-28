#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int>p={1,3}; //initializing a pair in C++
    cout<<p.first<<" "<<p.second<<endl;    //printing a pair in c++
    pair<int,pair<int,int>>q={1,{3,4}};  //pair within an pair this exaplains the working of nested pairs in c++.
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl; //nested pairs can be accessed
    //just by using their references indexes.
    pair<int,int>arr[]={{1,2},{5,6},{5,1}};
    cout<<arr[1].second; //here arr[1] means {5,6} shall be accessed.
    cout<<endl;
    return 0;
    }
    