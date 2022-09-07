#include<iostream>
using namespace std;

int main(){
    int a , b;
    char sign;

    cout<<"Enter an expression:  ";
    cin>> a >> sign >> b;

    if(sign == '+'){
        cout<< (a + b);
    } else if(sign ==  '-'){
        cout<< (a - b);
    } else if(sign == '*'){
        cout<< (a * b);
    } else if(sign ==  '/'){
        cout<< (a / b);
    }

    return 0;




}