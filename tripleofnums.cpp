#include<iostream>
using namespace std;

// int main(){
//     int N, M, W;

//     cin >> N >> M >> W;

//     int cnt = 0;

//     for(int i = 1; i <= N; i++){
//         for(int j = i; j <= M; j++){
//             for(int k = 1; k <= W; k++){
//                 if( i + j <= k){
//                     cnt ++;
//                 }
//             }
//         }
//     }

//     cout << cnt;

//     return 0;
// }

// Faster code..........

int main(){
    int N, M, W;

    cin >> N >> M >> W;

    int cnt = 0;

    for(int i = 1; i <= N; i++){
        for(int j = i; j <= M; j++){
            int k = i + j;

            if(k >= 1 && k <= W){
                cnt += W - k + 1;
            }
        }
    }

    cout << cnt;

    return 0;
}