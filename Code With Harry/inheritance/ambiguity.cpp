#include<iostream>
using namespace std;

class A{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};

class B{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};

class C: public A, public B{
    int a;
};

int main(){
    C o;
    o.A::greet();
    return 0;
}