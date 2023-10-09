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
    
    int main (){
        int n;
        cout<<" Enter the number: " ;
        cin>>n;

        is_prime(n) ? cout<<" prime ": cout <<"not prime" <<endl;
        
    return 0;
}