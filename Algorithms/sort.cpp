#include <bits/stdc++.h>
using namespace std;


bool mycomp(pair<int,int>p1,pair<int,int>p2) {
    if (p1.second<p2.second) {
        return true;
    }
    if (p1.second>p2.second) {
        return false;
    }
    if (p1.first>p2.first) {
        return true;
    }
    return false;
}

int main () {
    int arr[] = {1, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    //in ascending order
    sort(arr,arr+n);
    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());
//SORTING MY WAY
//Q. Sort it according to 2nd element, if second element
//is same, then sort according to the 1st element
//but in descending order.
pair<int,int>brr[]={{1,2},{2,1},{4,1}};
int l= sizeof(brr) / sizeof(brr[0]);
sort(brr,brr+l,mycomp);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int num=7;
    int count=__builtin_popcount(n);
    cout<<count<<endl;
    string s="123";
    sort(s.begin(),s.end());  //Sorting s String is easy ...
    
    do {
        cout<<s<<endl;
    }
    while (next_permutation(s.begin(),s.end()));
    int maxi=*max_element(arr,arr+l); //Used to Find the Maximum Element.
    return 0;
}
