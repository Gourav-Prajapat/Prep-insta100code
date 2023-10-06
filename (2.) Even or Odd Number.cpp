#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter your number: ";
    cin>>number;

    if(number%2==0){
        cout <<number << " is a even number " <<endl ;
    }
    else{
        cout <<number <<" is an odd number "<< endl;
    }

    return 0;
}