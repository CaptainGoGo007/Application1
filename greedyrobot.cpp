#include<iostream>
using namespace std;

/*
Problem: Greedy Robot

1. Read Integers rows, cols, then read matrix rowsxcols. All values are distinct.
2. A robot starts at cell (0,0).
3. Take the value in the current cell and moves.
4. It can move only one step to either: Right, Bottom or the diagonal.
5. It always selects the cell that has maximum value.
6. Print the total values the robot collects.

*/


int main(){
    // Reading two integers rows and cols....
    int rows , cols;
    cin >> rows >> cols;

    // Creating an array which will store the matrix....
    int arr[100][100];

    // Reading the matrix.....
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }

    // Creating direction arrays for bottom, right and digonal directions....
    int di[3] = {1, 0, 1};
    int dj[3] = {0, 1, 1};


    // Creating few useful variables.... 
    int i = 0, j = 0, sum = 0;

    // Creating loops for calculating final sum.....
    while(i < rows && j < cols){
        sum += arr[i][j];

        int next_val, best_i = -1, best_j = -1;

        for(int d = 0; d < 3; d++){
            int ni = i + di[d];
            int nj = j + dj[d];

            if(ni < rows && nj < cols){
                if(best_i == -1 || next_val < arr[ni][nj]){
                    next_val = arr[ni][nj];
                    best_i = ni;
                    best_j = nj;
                }
            }
        }

        if(best_i == -1){
            break;
        }

        i = best_i;
        j = best_j;

    }

    cout << sum;


}