#include <iostream>
const int MAX = 3;

bool isMagicSquare(int arr[][MAX], int n){
    int sum = 0, dSum = 0, dSum2 = 0;
    for(int j = 0; j < n; j++)
        sum += arr[0][j];
    for(int i = 0; i < n; i++){
        int sumCol = 0, sumRows = 0;
        for(int j = 0; j < n; j++){
            sumRows += arr[i][j];
            sumCol += arr[j][i];
        }
        if(sumRows != sum || sumCol != sum) return false;
        dSum += arr[i][i];
        dSum2 += arr[i][n-i-1];
    }
    if(dSum != sum || dSum2 != sum) return false;
    return true;
}

int main() {
    int square[MAX][MAX] = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};
    int size = 3;
    if (isMagicSquare(square, size)) std::cout << "The square is a magic square" << std::endl;
    else std::cout << "The square is not a magic square" << std::endl;
    return 0;
}