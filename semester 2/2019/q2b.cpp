#include <iostream>
using namespace std;

void printSerpentine(int arr[][3], int n, int m){
    for(int i = 0; i < n; i++)
        if(i % 2 == 0)
            for(int j = 0; j < m; j++)
                cout << arr[i][j] << " ";    
        else
            for(int j = m-1; j >= 0; j--)
                cout << arr[i][j] << " ";
    cout << endl;
}

int main(){
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    printSerpentine(A, 3,3);
    return 0;
}