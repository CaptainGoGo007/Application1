#include<iostream>
using namespace std;


// Print Minimum

// int main(){

//     const int size = 5; 

//     int numbers[size];

//     for(int i = 0; i < size; i++){
//         cin >> numbers[i];
//     }

//     int minimum = numbers[0];

//     for(int i = 0; i < size; i++){
//         if(minimum > numbers[i]){
//             minimum = numbers[i];
//         }
//     }
    
//     cout << minimum;

//     return 0;   
// }



// Find first and 2nd maximum values

// int main(){
//     int N;

//     cin >> N;

//     int numbers[N];

//     for(int i = 0; i < N; i++){
//         cin >> numbers[i];
//     }

//     int maximum = numbers[0];
//     int second_maximum = numbers[0];

//     int maximum_index = 0;

//     for(int i = 1; i < N; i++){
//         if(maximum < numbers[i]){
//             maximum = numbers[i];
//             maximum_index = i;
//         }
//     }

//     for(int i = 1; i < N; i++){
//         if(second_maximum < numbers[i] && i != maximum_index){
//             second_maximum = numbers[i];
//         }
//     }
    
//     cout << maximum << " " << second_maximum;

//     return 0;

// }