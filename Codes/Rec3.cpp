#include <iostream>
using namespace std;

//I AM USING BACKTRACKING APPROACH
void printNumbersReverse(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNumbersReverse(n-1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Numbers from" << n <<" to 1 are" << " are: ";
    printNumbersReverse(n);
    cout << endl;
    return 0;
}
