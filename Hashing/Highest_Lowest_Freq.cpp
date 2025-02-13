#include <bits/stdc++.h>
using namespace std;
void findHighestAndLowestFreq(int arr[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int maxFreq = 0, minFreq = n + 1;
    int maxElem, minElem;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElem = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minElem = it.first;
        }
    }
    cout << "Highest Frequency Element: " << maxElem << " (Frequency: " << maxFreq << ")" << endl;
    cout << "Lowest Frequency Element: " << minElem << " (Frequency: " << minFreq << ")" << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findHighestAndLowestFreq(arr, n);
    return 0;
}
