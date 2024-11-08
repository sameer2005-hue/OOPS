#include<iostream>
using namespace std;

class A{
    protected: int x;
    public:
    void getddataA(int i){
         x = i;
    }
};

class B{
    protected: int y;
    public:
    void getdata(int i){
         y = i;
    }
};

class C: public A, public B{
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

// class C: protected A, protected B{
//     public:
//     int max(){
//         getddataA(5);
//         getdata(3);
//         if (x> y)
//         return x;
//         else 
//         return y;
//     }
// };

// int main(){
//     C o1;
//     cout<<"max = ";
//     cout<<o1.max();
//     return 0;
// }