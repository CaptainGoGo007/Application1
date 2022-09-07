#include<iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int count = 0; count <= 10; count++){
        int c = a + b;
            a = b;
            b = c;

        cout << c << " ";
    }

}