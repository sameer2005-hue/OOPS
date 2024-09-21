#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0) {
    cout<<a<<endl;
    return a + b + c;
}

int main() {
    cout << "Sum of 10: " << sum(10) << endl;               // Uses default values for b and c
    cout << "Sum of 10 and 20: " << sum(10, 20) << endl;    // Uses default value for c
    cout << "Sum of 10, 20 and 30: " << sum(10, 20, 30) << endl; // No default values used

    return 0;
}
