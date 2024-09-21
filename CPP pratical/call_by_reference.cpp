#include <iostream>
using namespace std;

void callByReference(int &a) {
    a = 100; 
    cout << "Inside callByReference, value of a: " << a << endl;
}

int main() {
    int x = 10;

    cout << "Before callByReference, value of x: " << x << endl;

    callByReference(x);

    cout << "After callByReference, value of x: " << x << endl;

    return 0;
}
