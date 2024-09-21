#include <iostream>
using namespace std;

void callByValue(int a) {
    a = 100; 
    cout << "Inside callByValue, value of a: " << a << endl;
}

int main() {
    int x = 10;
    
    cout << "Before callByValue, value of x: " << x << endl;
    
    callByValue(x);
    
    cout << "After callByValue, value of x: " << x << endl;
    
    return 0;
}
