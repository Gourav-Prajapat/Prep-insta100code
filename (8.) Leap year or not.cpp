#include<iostream>
using namespace std;
int main(){
    int year;
    cout << " Enter the year: " ;
    cin >> year;

    if (year % 400 == 0){
        cout<<"Given year is leap year " <<endl;
    }
    else if (year % 4 == 0 && year % 100 !=0){
        cout <<" Given Year is Leap Year "<< endl;
    }
    else{
        cout<<"Given year is not a leap year " <<endl;
    }

    return 0;
}

// second if else method

#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter the year: ";
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 ))
    {
        cout<<"The given year is a leap year."<<endl;
    }
    else 
    {
        cout<<" The given year isn't a leap year.";
    }

    return 0;
}