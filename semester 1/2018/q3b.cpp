#include <iostream>
bool topHeavy(int arr[][3], int numRows, int numCols){
    int top = 0, bottom = 0;
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            if(j > i && arr[i][j] > 0)
                top++;
            else if(i > j && arr[i][j] > 0)
                bottom++;
        }
    }
    return top > bottom && !(numRows%2); 
}

int main(){
    int arr[4][3] = {{4, 4, 4},{3, 3, 0},{2, 0, 0},{1, 0, 0}};
    if(topHeavy(arr, 4, 3)) std::cout << " is top heavy \n";
    else    std::cout << " is not top heavy \n";
    return 0;
}