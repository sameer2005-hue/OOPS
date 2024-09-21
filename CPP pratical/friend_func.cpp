// Program to illustrate friend function
// a) friend function
// b) friend member function
// // c) friend class

#include<iostream>
using namespace std;

// Frined function
class A{
    int valueA;
    public:
    void setValue(int val){
        valueA = val;
    }
    friend void friendfunction();
};

int main(){
    
    return 0;
}