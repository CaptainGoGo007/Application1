#include<iostream>
using namespace std;

int main(){
    int a , b;

    cin>> a >> b;

    int result = a - (a/b)*b;

    cout<< result << " " << a % b;

    return 0;
}