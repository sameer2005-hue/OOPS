#include<iostream>
using namespace std;

namespace first{
    int value =10;

    void display(){
        cout<<"first namespace value: "<<value<<endl;
    }
}

namespace second {
    int value = 20;
    
    void display() {
        cout << "Namespace second, value: " << value << endl;
    }
}

int main(){
    first::display();
    second::display();
    
    return 0;
}