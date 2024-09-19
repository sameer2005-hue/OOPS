#include<iostream>
using namespace std;

class complex{
    int real , imag;
    public: 
    void setdata(int i, int j){
        real = i;
        imag = j;
    }
    void display(){
        cout<<"the sum of complex number is: "<<real<<" + "<< imag<<" i "<<endl;
    }

    friend complex sum (complex , complex);
};

complex sum(complex o1, complex o2){
    complex o3;
    o3.real = o1.real + o2.real;
    o3.imag = o1.imag + o2.imag;
    return o3;
}

int main(){
    complex o1,o2, o3;
    o1.setdata(5,3);
    o2.setdata(4,2);
    o3 = sum (o1, o2);
    o3.display();
    return 0;
}