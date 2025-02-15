#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the Number of Elements for the Array: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Largest element is: " << max << endl;
    return 0;
}