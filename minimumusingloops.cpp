#include<iostream>
using namespace std;

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin  >> T;

    int temp = 0;

    int N;
    int nums;

    while(temp < T){
        
        cout << "Enter an integer: ";
        cin  >> N;

        cout << "Enter numbers: ";
        int temp_2 = 0;
        while(temp_2 < N){
            cin >> nums;
            if(nums){
                cout << nums;
            }
            temp_2++;        
        }
        temp ++;
    }

    
    return 0;
}