#include<iostream>
using namespace std;

//Is Increasing Array?????

// int main(){

//     int N = 200, numbers[N];

//     int n;

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> numbers[i];
//     }

//     bool increasing = 1;

//     for(int i = 1; i < n; i++){
//         if(numbers[i] < numbers[i-1]){
//             increasing = 0;
//             break;
//         }
//     }

//     if(increasing){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }

//     return 0;
// }


// Replace MiniMax!

// int main(){

//     const int N = 200;

//     int n, a[N], min = 100000, max = -1;

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         if(a[i] < min){
//             min = a[i];
//         }else if(a[i] > max){
//             max = a[i];
//         }
//     }

    

//     for(int i = 0; i < n; i++){
//         if(a[i] == min){
//             a[i] = max;
//         }else if(a[i] == max){
//             a[i] = min;
//         }
//     }


//     for(int i = 0; i < n; i++){

//         if (i){
//             cout << " ";
//         }
//         cout << a[i];
//     }

//     return 0;
// }



// Unique Numbers of ordered list

// int main() {

//     const int N = 1000;

//     int n, a[N];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     for(int i = 0; i < n; i++){
//         if(a[i] != a[i-1]){
//             cout << a[i] << " ";
//         }
//     }

//     return 0;
// }


// Is Palindrome?

// int main(){

//     int N = 1000;

//     int n, a[N];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     int count = 0;

//     if(n % 2 == 0){
//         for(int i = 0; i < n/2; i++){
//             if(a[i] == a[n-i-1]){
//                 count++;
//             }
//         }

//         if(count == n/2){
//             cout << "YES";
//         }else{
//             cout << "NO";
//         }

//     }else{
//         for(int i = 0; i < (n-1)/2; i++){
//             if(a[i] == a[n-i-1]){
//                 count++;
//             }
//         }

//         if(count == (n-1)/2){
//             cout << "YES";
//         }else{
//             cout << "NO";
//         }
//     }



//     return 0;
// }


// Palindrome another approach

// int main(){

//     int N = 1000;

//     int n, a[N];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
    
//     for(int i = 0; i < n/2; i++){
//         if(a[i] != a[n-i-1]){
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES";


//     return 0;
// }


// Smallest Pair

// int main(){

//     const int N = 200;

//     int n, a[N];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     int min;
//     int temp;

//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             temp = a[i] + a[j] + j - i;
//             if(temp < min){
//                 min = temp;
//             }
//         }
//     }

//     cout << min;

//     return 0;

// }


// Find the 3 Minimum Values

// int main(){

//     int n;

//     cin >> n;

//     int a[n];

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     int min = a[0];
//     int min_index;

//     int second_min = a[0];
//     int secmin_index;

//     int third_min = a[0];
//     int thirmin_index;

//     for(int i = 0; i < n; i++){
//         if(a[i] <= min){
//             min = a[i];
//             min_index = i;
//         }
//     }

//     for(int i = 0; i < n; i++){
//         if(a[i] <= second_min && i != min_index){
//             second_min = a[i];
//             secmin_index = i;
//         }
//     }

//     for(int i = 0; i < n; i++){
//         if(a[i] < third_min && i != min_index && i != secmin_index){
//             third_min = a[i];
//             thirmin_index = i;
//         }
//     }

//     cout << min << " " << second_min << " " << third_min;

//     return 0;
// }


// Search for a number

// int main(){

//     int n, q, a[200];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     cin >> q;

//     for(int i = q+1; i >= 0; i--){
//         int nums;
//         cin >> nums;

//         int result = -1;
//         for(int j = n-1; j >= 0; j--){
//             if(a[j] == nums){
//                 result = i;
//             }
//         }

//         cout << result << " ";
//     }

//     return 0;
// }


// Find Most Frequent Number

// int main(){

//     int n, a[200];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];    
//     }

//     int result = 1;

//     int temp = 0;

//     for(int i = 0; i < n; i++){
//         int count = 0;

//         int freq_num = a[i];

//         for(int j = 0; j < n; j++){
//             if(a[j] == freq_num){
//                 count++;
//             }
//         } 
        
//         if(result < count){
//             result = count;
//             temp = freq_num;
//         }

//     }
    
//     cout << temp << " repeated " << result <<" times";

//     return 0;
// }


// Digits Frequency

// int main(){

//     int n, x, a[10] = {0};

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> x;

//         if(x == 0){
//             a[0]++;
//         }

//         while(x){
//             int last_digit = x % 10;
//             a[last_digit]++;

//             x /= 10;
//         }

//     }

//     for(int i = 0; i < 9; i++){
//         cout << i << " " << a[i] << endl;
//     }


//     return 0;
// }



// Unique Numbers of unordered list

// int main(){

//     int n, a[900];

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }    

//     for(int i = 0; i < n; i++){
//         int temp;
//         for(int j = 0; j < n; j++){
//             if(a[i] != a[j]){
//                 temp = a[i];
//             }
//         }
//         cout << temp << " ";
//     }

//     return 0;
// }


// Recaman's Sequence

// int main(){

// }