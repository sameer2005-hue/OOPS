#include<iostream>
using namespace std;

typedef struct person{
    string name;
    int age;
    float height;

    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"height: "<<height<<endl;
    }
} pr;

int main(){
    pr person1;
    pr person2;
    pr person3;

    person1.name = "sameer";
    person1.age = 19;
    person1.height = 1.75;
    cout<<"person 1 details: "<<endl;
    person1.display();

    person2.name = "mudit";
    person2.age = 16;
    person2.height = 2.75;
    cout<<"person 2 details: "<<endl;
    person2.display();

    person3.name = "advik";
    person3.age = 18;
    person3.height = 3.75;
    cout<<"person 3 details: "<<endl;
    person3.display();
    return 0;
}