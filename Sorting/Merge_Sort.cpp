#include <bits/stdc++.h>
using namespace std;
void merge_sort(int arr[],int n) {
    
}
int main() {
    cout<<"Enter the Number of Elements for the Array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Applying Merge Sort...\n";
    merge_sort(arr,n);
    cout << "Sorted Array: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}