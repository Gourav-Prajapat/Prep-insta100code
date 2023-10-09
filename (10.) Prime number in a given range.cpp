#include<iostream>
using namespace std;
bool is_prime(int n)
    {
        if (n<2){
            return false;
        }
        for(int i=2; i<=n/2; i++){
            if (n%i == 0){
            return false ;
            }   
        }
        return true ;
    }
int main() {
    int range1, range2;
    cout<<"Enter the range 1: " ;
    cin >> range1;
    cout<<"Enter the range 2: ";
    cin>>range2;

    for(int i=range1; i<=range2; i++){
        if (is_prime(i)){
            cout<<i <<" " ;
        }    
    } 

    return 0;
}