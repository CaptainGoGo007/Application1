#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;

    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10; 

    int result = 0;

    if(num1<num2 && num1<num3 && num1<num4 && num1<num5 && num1<num6 && num1<num7 && num1<num8 && num1<num9 && num1<num10){
        result = num1;
    }  

    if(num2<num1 && num2<num3 && num2<num4 && num2<num5 && num2<num6 && num2<num7 && num2<num8 && num2<num9 && num2<num10){
        result = num2;
    }

    if(num3<num1 && num3<num2 && num3<num4 && num3<num5 && num3<num6 && num3<num7 && num3<num8 && num3<num9 && num3<num10){
        result = num3;
    }

    if(num4<num1 && num4<num2 && num4<num3 && num4<num5 && num4<num6 && num4<num7 && num4<num8 && num4<num9 && num4<num10){
        result = num4;
    }
    if(num5<num1 && num5<num2 && num5<num3 && num5<num4 && num5<num6 && num5<num7 && num5<num8 && num5<num9 && num5<num10){
        result = num5;
    }

    if(num6<num2 && num6<num3 && num6<num4 && num6<num5 && num6<num1 && num6<num7 && num6<num8 && num6<num9 && num6<num10){
        result = num6;
    }
    if(num7<num2 && num7<num3 && num7<num4 && num7<num5 && num7<num6 && num7<num1 && num7<num8 && num7<num9 && num7<num10){
        result = num7;
    }
    if(num8<num2 && num8<num3 && num8<num4 && num8<num5 && num8<num6 && num8<num7 && num8<num8 && num8<num9 && num8<num10){
        result = num8;
    }
    if(num9<num2 && num9<num3 && num9<num4 && num9<num5 && num9<num6 && num9<num7 && num9<num8 && num9<num1 && num9<num10){
        result = num9;
    }
    if(num10<num2 && num10<num3 && num10<num4 && num10<num5 && num10<num6 && num10<num7 && num10<num8 && num10<num9 && num10<num1){
        result = num10;
    }

    cout << result ;
    
    return 0;
}