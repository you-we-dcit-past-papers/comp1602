#include <iostream>

void mergeSortedDesc(int A[], int B[], int C[], int n, int m){
    int i = 0, j = m - 1, k = 0;
    while(i < n && j >= 0){
        if(A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j--];
    }
    if(i == n)
        for(; j >= 0; j--)
            C[k++] = B[j];
    else
        for(; i < n; i++)
            C[k++] = A[i];
}

int main() {
    int A[] = {1, 3, 4, 5, 7, 8, 10, 13, 15, 16, 17, 20, 19, 18, 14, 11, 9, 6, 2};
    int B[19];
     std::cout << "Original array: ";
    for(int i = 0; i < 19; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;

    mergeSortedDesc(A, A, B, 19, 19);
   
    std::cout << "Ascending copy: ";
    for(int i = 0; i < 19; i++)
        std::cout << B[i] << " ";
    std::cout << std::endl;
    return 0;
}
