#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "______________\n";
}

bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();

    // checking horizontal safety
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q') 
        {
            return false;
        }
    }

    // checking vertical safety
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    // diagnol left Safety
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // diagnol right Safety
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true; // fixed: added missing semicolon
}

void nQueens(vector<vector<char>> &board, int row) // passing by reference to optimize memory usage
{
    int n = board.size();

    if (row == n)
    {
        printBoard(board); // base case
        return;
    }

    for (int j = 0; j < n; j++)
    { // cols loop
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q'; // fixed: changed "Q" to 'Q' as the vector type is char 
            nQueens(board, row + 1);
            board[row][j] = '.'; // removing previous case in backtracking
        }
    }
}

int main()
{
    vector<vector<char>> board;

    int n = 5; // board size or column size or har row mai N characters honge

    for (int i = 0; i < n; i++)
    {
        vector<char> newRow; // each individual row will acts as vector
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.'); // pushing empty character
        }
        board.push_back(newRow); // FIX: Pushing row into the board
    }
    nQueens(board, 0);
    return 0;
}
