#include<iostream>
using namespace std;

int main(){
    int x , a , b , c , d , e;

    cout<< "Enter X: \n";
    cin >> x;

    cout<< "Enter other 5 numbers: \n";
    cin >> a >> b >> c >> d >> e;

    int count = 0;

    count += (a <= x);
    count += (b <= x);
    count += (c <= x);
    count += (d <= x);
    count += (e <= x);

    cout << count << " " << 5-count;

    return 0;
}