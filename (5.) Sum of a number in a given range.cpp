#include<iostream>
using namespace std;
int main() {
    int range1, range2, sum=0;
    cout<<"Enter first number: ";
    cin>>range1;
    cout<<"Enter second number: ";
    cin >>range2;

    for (int i=range1;i<=range2; i++){
        sum=sum+i;
    }
    cout<<" Your sum will be: " <<sum <<endl;
    return 0;
}