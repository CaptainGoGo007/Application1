#include<iostream>
using namespace std;

int main(){
    int a , b , c;

    cout<< "Enter three numbers: \n";
    cin >> a >> b >> c;

    if(a < b){
        if(a < c){
            cout << a;
        } else{
            cout << c;
        }
    } else if(b < a){
        if(b < c){
            cout << b;
        }
        else{
            cout << c;
        }
    }

    return 0;
}