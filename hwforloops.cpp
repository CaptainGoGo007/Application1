#include<iostream>
using namespace std;


//Print X
// int main(){
    
//     int N;
//     cout << "Enter an odd number: ";
//     cin  >> N;
//     int temp = N;

//     if(N % 2 != 0){
        
//         for(int i = 0; i < N; i++){
//             for(int j = 0; j < N; j++){
//                 if(i == j || N-i-1 == j){
//                     cout << "*";
//                 }else{
//                     cout << " ";
//                 }
//             }

//             cout << "\n";
//         }

//     }else{
//         cout << "Not odd";
//     }

//     return 0;

// }



//Find Special Pairs
// int main(){

//     int count = 0;

//     for(int i = 50; i <= 300; i++){
//         for(int j = 70; j <= 400; j++){
//             if(i < j && (i+j) % 7 == 0){
//                 count++;
//             }
//         }
//     }

//     cout << count;

//     return 0;
// }



//Find all quadruples
// int main(){

//     int count1 = 0;
//     int count2 = 0;
//     //4-loops - 5333400


//     for(int i = 1; i <= 200; i++){
//         for(int j = 1; j <= 200; j++){
//             for(int k = 1; k <= 200; k++){
//                 for(int l = 1; l <= 200; l++){
//                     if(i + j == k + l){
//                         count1++;
//                     }
//                 }
//             }
//         }
//     }

//     for(int i = 1; i <= 200; i++){
//         for(int j = 1; j <= 200; j++){
//             for(int k = 1; k <= 200; k++){
//                 int l = i + j - k;
                
//                 if(l >= 1 && l <= 200){
//                     count2++;
//                 }
                    
//                 }
//             }
//         }
//     cout << count1 << " " << count2;

//     return 0;
//     }

    



//Is prime?

// int main(){
//     int N;
//     cin >> N;

    

//     if(N <= 1){
//         cout << "NO\n";
//     }else{
//         bool is_true = true;

//         for(int i = 2; i < N; i++){
//             if(N % i == 0){
//                 is_true = false;
//                 break;
//             }          
//         }
//             if(is_true){
//                 cout << "YES";
//             }else{
//                 cout << "NO";
//             }
//     }

   

//     return 0;
// }



//Print Primes

// int main(){

//     int n;
//     cin >> n;

//     for(int i = 2; i < n; i++){
//         bool is_ok = true;

//         for(int j = 2; j < i; j++){
//             if(i % j == 0){
//                 is_ok = false;
//                 break;
//             }
//         }

//         if(is_ok){
//             cout << i << " ";
//         }
//     }
    

//     return 0;
// }



//Digit Sum in Range

// int main(){
 
//     int n, a, b;

//     cin >> n >> a >> b;

//     int sum = 0;
    
//     for(int i = 1; i <= n; i++){
//         int temp = i;

//         int digits_sum = 0;

//         while(temp){
//             digits_sum += temp % 10;
//             temp /= 10;
//         }

//         if(digits_sum >= a && digits_sum <= b){
//             sum += i;
//         }
//     }

//     cout << sum;

//     return 0;
// }


int main(){
    int n;
    cin >> n;

    int temp = 0;

    while(n){
        temp = n % 10;
        n /= 10;

        cout << temp << " ";
    }
}