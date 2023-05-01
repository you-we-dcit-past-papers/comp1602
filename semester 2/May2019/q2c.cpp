#include <iostream>

bool isTopsyTurvy(int A[][3], int n) {
    int top = 0, bottom = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
            if (j > i)
                top += A[i][j];
            else if (j < i)
                bottom += A[i][j];
    return top > bottom;
}

int main(){
    int A[][3] = {{1, 2, 3}, {0, 4, 5}, {0, 0, 6}};
    if(isTopsyTurvy(A, 3)) std::cout << " is top heavy \n";
    else std::cout << " is not top heavy \n";
    return 0;
}