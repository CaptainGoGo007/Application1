#include<iostream>
using namespace std;

int main(){
    double a,b,c,d,e;

    cout<<"Enter 5 numbers: ";
    cin>> a >> b >> c >> d >> e;

    cout<<(a+b+c+d+e)/5<<"\n";
    cout<<(a+b+c)/(d+e)<<"\n";

    double avgF3 = (a+b+c)/3;
    double avgL3 = (d+e)/2;

    cout<<avgF3/avgL3;

    return 0;
}