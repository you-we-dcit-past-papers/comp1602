#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));
    int m[6][6];
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            m[i][j] = i+j;

    for(int i = 0; i < 6; i++){
        int temp = m[i][0];
        m[i][0] = m[i][5];
        m[i][5] = temp;
    }

    int randomRow = rand()%6;
    int randomCol = rand()% 6;
    m[randomRow][randomCol] = -1;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    return 0;
}