#include<iostream>
using namespace std;

int main(){
    
    int rows;
    cout << "Enter number of rows: ";
    cin  >> rows;
    char input;
    cout << "Enter a character: ";
    cin  >> input;

    for(int i = 1; i <= rows; i++){

        for(int spaces = rows - 1; spaces >= i; spaces--){
            cout << " ";
        }

        for(int j = 0; j < 2*i - 1; j++){
                cout <<input; 
        }

        cout << "\n";
    }

    int temp = rows;

    for(int i = 1; i <= rows; i++){

        for(int spaces = 1; spaces < i; spaces++){
            cout << " ";
        }

        for(int j = 2*temp-1; j >= 1; j--){
            cout << input;
        }

        temp--;

        cout << "\n";

    }

    return 0;    
}