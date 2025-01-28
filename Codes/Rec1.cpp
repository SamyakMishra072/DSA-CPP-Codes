#include <iostream>
using namespace std;

void printNumbers(int current, int n) {
    if (current > n) {
        return;
    }
    cout << current << " ";
    printNumbers(current + 1, n);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " are: ";
    printNumbers(1, n);
    cout << endl;
    return 0;
}
