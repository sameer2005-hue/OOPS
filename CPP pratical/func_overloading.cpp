#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int intSum1 = add(10, 20);          // Calls the first add function
    int intSum2 = add(10, 20, 30);      // Calls the second add function
    float floatSum = add(10.5f, 20.5f); // Calls the third add function

    cout << "Sum of 10 and 20: " << intSum1 << endl;
    cout << "Sum of 10, 20, and 30: " << intSum2 << endl;
    cout << "Sum of 10.5 and 20.5: " << floatSum << endl;

    return 0;
}
