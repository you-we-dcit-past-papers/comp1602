#include <iostream>

void printRowReverse(int A[][3], int n, int m, int row){
    for(int j = m-1; j >= 0; j--)
        std::cout << A[row][j] << " ";
    std::cout << std::endl;
}

int main(){
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    printRowReverse(A, 3,9,0);
    return 0;
}