#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public: 
    void setId(void){
        salary = 122;
        cout<<"enter id of employee: "<<endl;
        cin>>id;
    }

    void getId(void){
        cout<<"the id of this employee is: "<<id<<endl;
    }
};

int main(){
    employee o1,o2,o3;
    o1.setId();
    o1.getId();

    employee fb[4];
    for(int i =0; i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}