#include<iostream>
using namespace std;

int main() {
  
    int T;
    cin >> T;

    for(int t = 0; t < T; t++){
        int num;
        int sum = 0;
        cin >> num;

        for(int n = 1; n <= num; n++){
            sum += n;
        }
        cout << "sum from 1 to " << num << " is " << sum << ".\n";
    }

    

    return 0;
}