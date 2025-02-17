#include <bits/stdc++.h>
using namespace std;
void rotatebyd(int arr[], int n, int d) {
    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
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
    cout << "Enter a number for Rotation: ";
    int d;
    cin >> d;
    rotatebyd(arr.data(), n, d); 
    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
