#include<iostream>
using namespace std;

int main(){
    int x;
    int result = 1;
     
    cin >> x;

    while(result <= x){
        if(result % 3 == 0){
            cout << result << "\n";
        }
        result += 1;
    } 

    return 0;
}