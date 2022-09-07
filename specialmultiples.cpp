#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int temp = 0;
    while(temp <= num){
        if(temp % 8 ==0 || temp % 4 == 0 && temp % 3 == 0){
            cout << temp << " ";
        }

        temp ++;
    }

    return 0;
}