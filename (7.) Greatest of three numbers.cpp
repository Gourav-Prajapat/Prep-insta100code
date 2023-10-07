#include<iostream>
using namespace std;
int main() {
    int num_1, num_2, num_3;
    cout << "Enter your first number: ";
    cin >>num_1;
    cout << "Enter your Second number: ";
    cin >>num_2;
    cout << "Enter your Third number: ";
    cin >>num_3;

    if(num_1 > num_2&& num_1 > num_3){
        cout<<num_1<< " is a greater number." <<endl;
    }
    else if(num_2 > num_1 && num_2 > num_3){
        cout<<num_2 << " is a greater number." <<endl;
    }
    else{
        cout<<num_3 <<" is a greater number." << endl;
    }

    return 0;
}