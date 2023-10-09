#include<iostream>
using namespace std;
int main() {
    int num, rem, reverse = 0;
    cout<<"Enter the number for reverse: "; 
    cin>>num;
    
    while(num !=0){
        rem = num % 10;
        reverse = (reverse*10) + rem;
        num = num /10 ;
    }

    cout<< " The revere of given number is : "<< reverse <<endl;
    return 0;
}

// using function

#include<iostream>
using namespace std;
int get_reverse (int num, int reverse = 0 ){
    if (num == 0){
        return reverse;
    }
    int remainder = num % 10;
    reverse = (reverse * 10 )+ remainder;
    num = num / 10;
    return get_reverse(num , reverse);
}
int main() {
    int num, reverse=0 , remainder;
    cout << " Enter the number for reverse: " ;
    cin>> num;

    cout<< "The reverse will be: " << get_reverse(num, reverse) ;

    return 0;
}