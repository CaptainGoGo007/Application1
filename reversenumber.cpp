#include<iostream>
using namespace std;

int main() {
    
    int num;
    cin >> num;

    int result = 0;

    while(num>0){
        int last_digit = num % 10;
        num /= 10;

        result = result * 10 + last_digit;
    }

    cout << result << " " << result * 3;
    return 0;
    
}