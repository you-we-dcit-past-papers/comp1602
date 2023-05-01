#include <iostream>
#include <fstream>

const int row = 20, col=20; // reduced the number to make workin with the file smaller

bool isSparse(int arr[][col], int row, int col) {
    int rizz = 0;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            if(arr[i][j] != 0) // chose != due to question phrasing
                rizz++;
    return rizz  < (0.2 * (row*col));
}


int main(){
    std::ifstream fin("input.txt"); // substract numbers to make it sparse
    int MM[row][col];
    
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++) 
            MM[i][j] = 0;

    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++) 
            fin >> MM[i][j];

    if (isSparse(MM, row, col)) std::cout << "The matrix is sparse." << std::endl;
    else std::cout << "The matrix is not sparse." << std::endl;

    return 0;
}
