#include<iostream>
using namespace std;

class A{
    protected: int x,y;
    public:
    void getddataA(int i){
         x = i;
    }
};

class B: public A{
    public:
    void getdata(int i){
         y = i;
    }
};

class C:  public B{
    public:
    int max(){
        if (x> y)
        return x;
        else 
        return y;
    }
};

int main(){
    C o1;
    o1.getddataA(5);
    o1.getdata(3);
    cout<<"max = ";
    cout<<o1.max();
    return 0;
}