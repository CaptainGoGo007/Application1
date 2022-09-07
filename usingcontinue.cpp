#include<iostream>
using namespace std;

int main(){
    int x , y;

    while(true){
        cin>> x >> y;

        if(y == 0){
            cout<< "y is zero, please try other two numbers!!!!!!! \n";
            continue;
        }
        cout<< x/y << "\n";
    }

    cout<< "Bye";

    return 0;
}
