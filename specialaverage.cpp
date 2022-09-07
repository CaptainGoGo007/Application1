#include<iostream>
using namespace std;

int main(){
    int N;
    cout<< "Enter a number: ";
    cin >> N;

    int temp = 0;

    cout << "Enter " << N << " numbers: ";

        double even_sum = 0;
        double odd_sum  = 0;
        int even_count = 0;
        int odd_count = 0;

    while(temp < N){
        double new_nums;
        
        cin >> new_nums;
        cout << new_nums <<" ";

        
       if(temp % 2 == 0){
            even_sum += new_nums;
            even_count++;
       }else{
            odd_sum += new_nums;
            odd_count++;
       }       

        temp++;        
    }

        cout << "\n";

        cout << even_sum/even_count << "  " << odd_sum/odd_count;

    return 0;
}