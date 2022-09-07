#include<iostream>
using namespace std;

int main(){
    int num , pow;

    cin >> num >> pow;

    int temp = 1;
    int result = 1;

    while(temp <= pow){
        result *= num;
        temp++;
    }

    cout<< result;

    return 0;
}
