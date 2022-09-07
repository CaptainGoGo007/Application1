#include<iostream>
using namespace std;


// //Find pair of maximum sum

// int main() {
//     int n;

//     cin >> n;

//     int numbers[n];

//     for(int i = 0; i < n; i++){
//         cin >> numbers[i];
//     }

//     int maximum = numbers[0];
//     int second_maximum = numbers[0];
//     int maximum_index = 0;

//     for(int i = 0; i < n; i++){
//         if(maximum < numbers[i]){
//             maximum = numbers[i];
//             maximum_index = i;
//         }else if(second_maximum < numbers[i] && i != maximum_index){
//             second_maximum = numbers[i];
//         }
//     }

//     cout << maximum + second_maximum;

//     return 0;
// }


// Reverse in Place

// int main(){
//     int n; 

//     cin >> n;

//     int numbers[n];

//     for(int i = 0; i < n; i++){
//         cin >> numbers[i];
//     }

//     int temp;

//     for(int i = 0; i < n/2; i++){
//         temp = numbers[i];
//         numbers[i] = numbers[n-i-1];
//         numbers[n-i-1] = temp;
//     }

//     for(int i = 0; i < n; i++){
//         cout << numbers[i] << " ";
//     }
    

//     return 0;
// }

// Find most frequent number

    int main(){

        int n; 

        cin >> n;

        int numbers[n];

        for(int i = 0; i < n; i++){
            cin >> numbers[i];
        }

        return 0;
    }

