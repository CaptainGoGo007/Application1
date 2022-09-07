#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;

    int temp = 0;

    while(temp <= T){
        int num;
        cin >> num;

        int sum = 0;
        int start = 1;

        while(start <= num){
            sum += start;
            start++;
        }
        temp++;
        cout<< "The sum from 1 to " << num << " is " << sum << ".\n";
    }

    return 0;
}