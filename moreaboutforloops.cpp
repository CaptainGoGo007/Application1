#include<iostream>
using namespace std;


//Special Multiples-1

// int main(){

//     int n;
//     cin  >> n;

//     for(int i = 0; i < n; i++){
//         if(i % 8 ==0 || i % 4 == 0 && i % 3 == 0){
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

//Special Multiples-2

// int main(){
//     int n;
//     cin  >> n;

//     int temp = 0;

//     for(int i = 0; i < n; ){
//         if(temp % 3 == 0 && temp % 4 != 0){
//             cout << temp << " ";
//             i++;
//         }
//         temp++;
//     }


//     return 0;
// }

// Minimum of Values

int main() {

        int T,N,nums;
        cin >> T;

        int temp = 0;
        int minimum = 0;
        for(int i = 0; i < T; i++){
            cin >> N;


            for(int j = 0; j < N; j++){
                cin >> nums;

                if(j == 0){
                    temp = nums;
                }else if(temp > nums){
                    temp = nums;
                }
            
                }
                 cout << temp;
            }

           

            return 0;

        }

        

        

