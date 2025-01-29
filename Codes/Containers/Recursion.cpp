#include <iostream>
using namespace std;
int c=1;
void print() {
    if (c==6) { //BASE CONDITION.
        return ;
    }
        cout<<"Samyak Mishra"<<endl;
        c++;
        print();
}
int main() {
    print();
    return 0;
}