#include<iostream>
using namespace std;
int main(){
    int num1, num2 ;
    cout<<"Enter your first number: ";
    cin>>num1;
    cout<<"Enter your second number: ";
    cin>>num2;

    if(num1 > num2){
        cout<<num1<<" is a greatest number" <<endl;
    }
    else{
        cout<<num2<<" is a greatest number" <<endl;
    }
    return 0;
}