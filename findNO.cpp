#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int temp = 0;
    string name;

    int name_length;

    while(temp < N){
        cin >> name;
        
        if(name == "NO" || name == "no" || name == "No" || name == "nO" || name == "ON" || name == "on" || name == "On" || name == "oN"){
            cout << name << " ";
        }

        temp ++;
    }

    return 0;

}