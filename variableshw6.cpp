#include<iostream>
using namespace std;

int main(){
    int a,b,c,temp=-1;

    cin>> a >> b >> c;

    temp=a;
    a=b;
    b=c;
    c=temp;
    
    cout<< a << " " << b << " " << c ;

    return 0;
}