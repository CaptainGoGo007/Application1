#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    cin >> a >> b >> c;

    if(a < 100 || b < 100 || c < 100){
        if(a<b){
            if(a<c){
                if(a<100){
                    cout<< a;
                }
            }else{
                    cout<< c;
            }
        }else{
            if(b<c){
                if(b<100){
                    cout<< b;
                }
            }else{
                    cout<< c;
            }
        }
    }else{
        cout<< -1;
    }

    return 0;

}