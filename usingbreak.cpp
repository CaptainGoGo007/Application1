#include<iostream>
using namespace std;

int main(){
    int x , y;

    while(true){
        cin >> x >> y;

        if(y == 0){
            cout<< "Y is 0!\n";
            break;
        }
        cout<< x/y << " \n";
    }
    cout<< "Bye";

    return 0;
}