#include <iostream>
#include <cstdlib>
#include <ctime>

struct Cell {
    bool hasLightBulb;
    bool isHidden;
    int neighbour;
};

void initBoard(Cell board[][100], int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows; j++) {
            board[i][j].hasLightBulb = false;
            board[i][j].isHidden = true;
            board[i][j].neighbour = 0;
        }
    }
}

bool isValid(Cell board[][100], int numRows, int row, int col) {
    return (row >= 0 && row < numRows) && (col >= 0 && col < numRows);
}

void placeBulb(Cell board[][100], int numRows){
    for(int i = 1; i <= 10; i++){
        int row = rand()%numRows;
        int col = rand()%numRows;
        board[row][col].hasLightBulb = true;
        board[row][col].isHidden = false;
    }
}

int getNumber(Cell board[][100], int numRows, int row, int col){
    if (!isValid(board, numRows, row, col)) {
        return -1; // or any other value to indicate that the cell is invalid
    }
    int i = 0; 
    if (row > 0) i += board[row - 1][col].hasLightBulb;
    if (row < numRows - 1)   i += board[row + 1][col].hasLightBulb;
    if (col > 0)  i += board[row][col - 1].hasLightBulb;
    if (col < numRows - 1)    i += board[row][col + 1].hasLightBulb;
    return i;
}

bool isCrooked(Cell board[][100], int numRows){
    int top = 0, bottom = 0;
    for(int i = 0; i < numRows; i++)
        for(int j = 0; j < numRows; j++)
            if(board[i][j].hasLightBulb)
                if(j > i)
                    top++;
                else
                    bottom++;
    return top > bottom;
}

int main() {
    srand((unsigned int)time(0));
    const int numRows = 10;
    Cell board[numRows][100];

    initBoard(board, numRows);
    placeBulb(board, numRows);

    std::cout << "Initial board:" << std::endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numRows; j++) 
            std::cout << board[i][j].hasLightBulb << " ";
        std::cout << std::endl;
    }

    std::cout << "Number of neighbors:" << getNumber(board, numRows, 1, 1) <<  std::endl;
    std::cout << "Board is " << (isCrooked(board, numRows) ? "crooked" : "not crooked") << std::endl;

    return 0;
}
