#include <iostream>
using namespace std;

// base class
class base
{
    int data1;   // by default private -> it can't be inherited

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 41;
    data2 = 23;
}

int base :: getdata1()
{
    return data1;
}
int base :: getdata2()
{
    return data2;
}

// derived class
class derived : public base   // public member of base class is also a public member in derived class 
{
    int data3;  // private member

public:
    void process();
    void display();
};

void derived :: process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "value of data 1 is: " << getdata1() << endl;
    cout << "value of data 2 is: " << getdata2( ) << endl;
    cout << "value of data 3 is: " << data3 << endl;
}

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}