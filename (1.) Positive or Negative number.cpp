#include<iostream>
using namespace std;
int main(){
    int input_number;
    cout<<"Enter your number: ";
    cin>>input_number;

    if(input_number>=0){
        cout<< "Your number is Positive" <<endl;
    }
    else{
        cout << "Your Number Is Negative" <<endl;
    }
return 0;
}