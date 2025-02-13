#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        int min=i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[min]) {
                min=j;
            }
            //NOW SWWAPPING WILL HAPPEN.
            //swap(arr[i], arr[min]); //IN C++ WE HAVE A IN-BUILT FUNCTION FOR SWAP, you just have to write swap(parameters separated by spaces);
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}
int main() {
    cout<<"Enter the Number of Elements for the Array: ";
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Applying Selection Sort...\n";
    selection_sort(arr,n);
    cout << "Sorted Array: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}