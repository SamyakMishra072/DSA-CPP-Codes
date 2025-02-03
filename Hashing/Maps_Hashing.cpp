#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map<int,int>mpp;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    cout<<"Enter the Number of Queries "<<endl;
    int q;
    cin>>q;
    while (q--) {
        cout<<"Enter the Desired Query---> ";
        int num;
        cin>>num;
        cout<<"Occurences is ---> ";
        cout<<mpp[num]<<endl;
    }
    return 0;
}


//Creating frequency map O(n)
//Querying occurrences: O(1) per query (since map lookup is O(log n), but on average O(1) for small data)
//Total complexity: O(n + q)


/*Storing and Fetching in Map Takes log(n) Amount of Time 
for each and every case whether it is Average,Best or Worst Case.*/
//Here n is the no. of Elements that are in the Map.

//Here we used Maps, But if we have used Unordered Maps the answer would have been same.\
//Unordered Maps also do the same thing.
