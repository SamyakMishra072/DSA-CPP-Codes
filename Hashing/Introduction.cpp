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
    int hash[13] = {0}; // Assuming elements are in the range [0, 12]
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    cout << "\nPreprocessing done! You can now query frequencies.\n";
    
    // Query input
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "\nEnter " << q << " numbers to check their frequency:\n";
    while (q--) {
        int number;
        cin >> number;
        
        // FETCHING
        if (number >= 0 && number <= 12) {
            cout << "Frequency of " << number << " = " << hash[number] << endl;
        } else {
            cout << "Number " << number << " is out of range (0-12)!\n";
        }
    }

    cout << "Program execution completed!\n";
    return 0;
}
