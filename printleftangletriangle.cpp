#include<iostream>
using namespace std;

int main() {
   
   int N;

   cin >> N;

   int row = 1;

   while(row <= N){
        int star_count = 1;

        while(star_count <= row){
            cout<< "*" << " ";
            star_count++;
        }

        cout << "\n";
        row++;

   }

    return 0;
}