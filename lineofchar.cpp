#include<iostream>
using namespace std;

int main(){
    int x;
    char y;

    cin >> x >> y;

    int temp = 0;

    while(temp < x){
        cout << y << " ";
        temp++;
    } 

    return 0;
}