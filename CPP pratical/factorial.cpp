#include<iostream>
using namespace std;

int fact(int n);

int main(){
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    int c = fact(n);

    cout<<"the factorial of the number is: "<<c<<endl;
    return 0;
}

int fact(int n){
    int fact =1;
    if(n==0 || n==1){
        return 1;
    } else
    for(int i=1; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}