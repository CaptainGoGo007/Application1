#include<iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int cnt_N = 1;

    while(cnt_N <= N){
        int cnt_M = 1;

        while(cnt_M <= M){
            cout << cnt_N << " x " << cnt_M << " = " << cnt_N * cnt_M << "\n";
            cnt_M++;
        }

        cnt_N ++;
    }   


    return 0;
}