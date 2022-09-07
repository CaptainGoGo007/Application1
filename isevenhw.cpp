#include<iostream>
using namespace std;

int main(){
    int num;
    cin>> num;

    //is even using % 2
    bool is_even = (num % 2 == 0);

    cout<< is_even<<"\n";

    //is even using /2

    double a = (double)num/2.0;
    a = a - (int)a;

    bool is_even2 = (a == 0);

    cout<< is_even2<<"\n";


    // using % 10 only

    int result1 = num % 10;
     

    bool is_even3 = (result1==0 || result1==2 || result1==4 || result1==6 || result1==8); 

    cout<<is_even3;


    return 0;

}