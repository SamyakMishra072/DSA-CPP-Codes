#include <bits/stdc++.h>
using namespace std;

void rotatebyd(int arr [],int n,int d ) {
    d=d%n;
    int temp[d];
    for (int i=0;i<d;i++) {
        temp[i]=arr[i];
    }
    for (int i=d;i<n;i++) {
        arr[i-d]=arr[i];
    }
    for (int i=n-d;i<n;i++) {
        arr[i]=temp[i-(n-d)];
    }
}
int main() {
    cout << "Enter the Number of Elements for the Array: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter a number for Rotation: ";
    int d;
    cin>>d;
    rotatebyd(arr,n,d);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
 