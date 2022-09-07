#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int even_sum = 0;
    int odd_sum  = 0;
    int odd_count = 0;
    int even_count = 0;

    int nums;

    for(int i = 1; i <= n; i++){
        
        cin >> nums;
       
        if(i % 2 == 0){
            even_sum += nums;
            even_count++;
        }else{
            odd_sum += nums;
            odd_count++ ;
        }

    }

    cout << odd_sum/odd_count << "  " << even_sum/even_count;

    return 0;

}