#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // PRE-COMPUTATION
    int hash[13] = {0}; 
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "\nEnter number to check their frequency:\n";
    while (q--) {
        int number;
        cin >> number;
        // FETCHING
        if (number >= 0 && number <= 12) {
            cout << "Frequency is "<< hash[number] << endl;
        } else {
            cout << "Number out of range (0-12)!\n";
        }
    }
    return 0;
}
