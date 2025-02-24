#include <bits/stdc++.h>
using namespace std;

void moveall0s(vector<int>& a) {
    int j = 0; 
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
}
int main() {
    cout << "Enter the Number of Elements for the Array: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements of the Array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    moveall0s(arr);
    cout << "Array after moving all zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
