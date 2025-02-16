#include <bits/stdc++.h>
using namespace std;

void rotateby1(int n,int arr [] ) {
    int temp=arr[0];
    for (int i=1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main() {
    cout << "Enter the Number of Elements for the Array: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotateby1(n,arr);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
 