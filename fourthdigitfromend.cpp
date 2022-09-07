#include<iostream>
using namespace std;

int main(){
    int num;
    cin>> num;

    int result = (num/1000)  % 10;

    cout<< result;
}