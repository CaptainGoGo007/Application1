#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if(num < 10000){
        cout<< "This is a small number";
    } else{
        int lastdigit = num % 10;
        int lastsecdig = (num/10) % 10;
        int lastthirddigit = (num/100) % 10;

        int result = lastdigit + lastsecdig + lastthirddigit;

        if((result%2) != 0){
            cout<< "This is a great number";
        }else if(lastdigit % 2 != 0 || lastsecdig % 2 != 0 || lastthirddigit % 2 != 0){
            cout << "This is a good number";
        }else{
            cout<< "This is a bad number";
        }

        }

    }
