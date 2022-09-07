#include<iostream>
using namespace std;

int main(){
    cout<< "Enter the range: \n";

    int x , y;
    cin >> x >> y;

    while(x <= y){
        cout << x <<" ";
        x++;
    }

    return 0;
}