#include<iostream>
using namespace std;

// int main() {
//     int N, M, sum;

//     cin >> N >> M >> sum;

//     int cnt = 0;

//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= M; j++){
//             if(i + j == sum){
//                 cnt ++;
//             }
//         }
//     }
    
//     cout << cnt;

//     return 0;
// }

// Faster Code

int main() {
    int N, M, sum;

    cin >> N >> M >> sum;

    int count = 0;

    for(int i = 1; i <= N; i++){
        int j = sum - i; // i + j == sum

        if(j >= 1 && j <= M){
            count++;
        }
    }

    cout << count;

    return 0;
}