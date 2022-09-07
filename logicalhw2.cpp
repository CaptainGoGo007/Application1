#include<iostream>
using namespace std;

int main(){
    int nb, ng, nt;
    cin>> nb >> ng >> nt;

    cout<< (nb > 25) << "\n";
    cout<< (ng <= 30) << "\n";
    cout<< (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";
    cout<< (nb < 60 || ng < 70) << "\n";
    cout<< (!(nb >= 60) || !(ng >= 70)) << "\n";
    cout<< (nb == ng + 10) << "\n";
    cout<< ((nb - ng > 10) || nt > 5) << "\n";
    cout<< ((nb == ng + 10 ) || ng == ng + 15) << "\n";
}