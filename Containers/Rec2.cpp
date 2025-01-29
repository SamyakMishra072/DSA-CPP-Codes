#include <iostream>
using namespace std;

//I AM USING BACKTRACKING APPROACH
void printNumbers(int n) {
    if (n == 0) 
        return;
    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " are: ";
    printNumbers(n);
    cout << endl;
    return 0;
}
