#include<iostream>
using namespace std;

int main() {
    int T, N, values;
    cin >> T;

    while(T--){
        cin >> N;

        int sum = 0;
        for(int i = 0; i < N; i++){
            cin >> values;

            int result = 1;
            for(int j = 0; j <= i; j++){
                result *= values;
            }
            sum += result;
        }
        cout << sum << " ";
    }

    return 0;
}