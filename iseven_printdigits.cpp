#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter a number: \n";
    cin >> num;

    if(num % 2 == 0){
        cout << num % 10;
    }else{
        if(num < 1000){
            cout << num % 100;
        } else if(num > 1000 && num < 1000000){
            cout << num % 10000;
        }else{
            num = -num;
            cout << num;
        }
    }

    return 0;

}