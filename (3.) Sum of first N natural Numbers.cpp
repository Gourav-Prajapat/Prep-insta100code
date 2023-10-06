#include<iostream>
using namespace std;
/*
int main() {
    int num=5, sum=0;
    // by iterative way 
    for(int i=1; i<=num; i++){
        sum=sum+i;
    }
    cout<<"sum of first n natural no.: "<<sum <<endl;
    return 0;
}
*/
/*
int main() {
    //by using formula
    int num=10, sum=0;
    
    sum= num*(num+1)/2;
    cout<<"sum of first " <<num << " is: "<<sum << endl ;
    return 0;
}
*/
//using function
    int find_sum(int sum=0,int number=10){
        for(int i=1; i<=number; i++)
            sum=sum + i;
            return sum;
        }
        
    int main() 
    {
       cout<< find_sum();
       // cout<<" your total sum is: " <<sum <<endl;
    
    return 0;
    }