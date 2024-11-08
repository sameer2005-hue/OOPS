#include<iostream>
#include<string.h>
using namespace std;

class student{
    protected: 
    int roll_no;
    char name[15];

    public:
    void getdataA(int i, char* s){
        roll_no = i;
        strcpy( name, s);
    }
};

class marks: public student{
    protected:
    int m1,m2;
    public:
    void getdataB(int i, int j){
        m1 = i; m2 =j;
    }
};

class sessional{
    protected:
    int s1,s2;
    public:
    void getdatac(int i, int j){
        s1 = i; s2 =j;
    }
};

class result: public marks, public sessional{
    public:
    int sum(){
        return( m1 + m2 + s1+ s2);
    }
    void display(){
        cout<<"name = "<<name<<endl;
        cout<<"roll_no = "<< roll_no<<endl;
    }
};

int main(){
    result o;
    o.getdataA( 5 , "sameer");
    o.getdataB(65,75);
    o.getdatac(75,85);
    o.display();
    cout<<"result = "<<o.sum()<<endl;
    return 0;
}