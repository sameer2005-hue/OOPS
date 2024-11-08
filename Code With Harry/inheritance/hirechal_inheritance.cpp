#include<iostream>
using namespace std;

class A{
    protected: int x,y;
    public:
    void getdataA(int i, int j){
         x = i;
         y = j;
    }
};

class B: public A{
    public:
    int min(){
        if (x< y)
        return x;
        else 
        return y;
    }
};

class C:  public A{
    public:
    int max(){
        if (x> y)
        return x;
        else 
        return y;
    }
};

int main(){
    B o1;
    o1.getdataA(5,30);
    cout<<"min = "<<o1.min()<<endl;

    C o2;
    o2.getdataA(23,44);
    cout<<"max ="<<o2.max()<<endl;

    return 0;
}