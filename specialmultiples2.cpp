#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int temp = 0;
    int i = 0;

    while(i < num){
        if(temp % 4 != 0){
            cout << temp << " ";
            i++;
        }

        temp += 3;
    }

    return 0;

}