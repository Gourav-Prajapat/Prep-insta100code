#include<iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout<<" Enter the number: ";
    cin>>n;

    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    cout<< "Sum will be: "<<sum <<endl;    
    return 0;
}


// using function
#include<iostream>
using namespace std;
int find_sum(int n, int sum){
    if (n==0){
    return sum;
    }
    sum= sum + n%10;
    n= n/10;
    return find_sum(n, sum);
}
int main() {
    int n, sum=0 ;
    cout <<"Enter the Number: ";
    cin>> n;
    cout << " Sum will be : "<<find_sum(n, sum);

    return 0;
}