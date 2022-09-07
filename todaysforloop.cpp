#include<iostream>
using namespace std;

//Find NO's
// int main(){
//     int n;
//     cin >> n;

//     string temp;

//     for(int i = 0; i < n; i++){
//         cin >> temp;

//         if(temp == "NO" || temp == "no" || temp == "No" || temp == "nO" || temp == "On" || temp == "ON" || temp == "On" || temp == "oN"){
//             cout << temp << " "; 
//         }
//     }


//     return 0;

// }

//Reverse Number
// int main(){

//     int N;
//     cin >> N;

//     int num = 0;

//     for(int i = N; i > 0; i /= 10){
//         int last_digit = N % 10; //Fetching last digit
//         N /= 10;                 //Removing last digit

//         num = num * 10 + last_digit;

//     }

//     cout << num << " " << num * 3;


//     return 0;
// }

//Multiplication Table

// int main(){
//     int N, M;
//     cin >> N >> M;


//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= M; j++){
//             cout << i << " x " << j << " = "<< i * j << "\n"; 
//         }
//     }

//     return 0;
// }



// Special Sum

// int main(){
//     int T,N,nums;
//     cout << "Enter the number of test cases: ";
//     cin  >> T;

    

//     for(int i = 0; i < T; i++){
//         cout << "Enter the number of nums: "; 
//         cin  >> N;
//         int sum = 0;

//         cout << "Enter the nums : ";

//         for(int j = 1; j <= N; j++){
            
//             cin  >> nums;

//             int result = 1;
//             for(int k = 0; k < j; k++){
//                 result *= nums;
//             }

//             sum += result;

            
//         }

//         cout << "The special sum of nums is: "<< sum << ".\n";
//     }
//     return 0;
// }

//Fibonnaci Sequence

int main() {
    int N;
    cin >> N;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 0; i < N; i++){
        int c = a + b;
            a = b;
            b = c;
        cout << c << " ";
    }


    return 0;
}