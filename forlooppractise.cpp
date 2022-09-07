#include<iostream>
using namespace std;

int main(){

    int n;

    cin >> n;

    //left-angled triangle
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    //down-sided triangle
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << "*";
        } 
        cout << "\n";
    }

    

}