#include<iostream>
using namespace std;

class A{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};

class B: public A{
    public:
    void greet(){
        cout<<"whose the hell you"<<endl;
    }
};


int main(){
    B o;
    o.greet();
    o.A::greet();
    return 0;
}