#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h;

    cin>> a >> b >> c >> d >> e >> f >> g >> h;

    cout<< a <<" "<< b <<" "<< c <<" "<< d <<" "<< e <<" "<< f <<" "<< g <<" "<< h
        <<endl;

    cout<< "Sum of odd places is "<< a + c + e + g << ".\n";
    cout<< "Sum of even places is "<< b + d + f + h<<".\n";

    return 0;
}