#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int rows = 0;

    while(rows < num){

        int star_count = 0;

        while(star_count <= rows){
            cout << "*";
            star_count++;
        }

        cout << "\n";

        rows++;
    }

    return 0;
}