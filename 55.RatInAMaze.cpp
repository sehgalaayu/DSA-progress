#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solveMazeUtil(int maze[][4], int x, int y, string sol, int N, vector<vector<bool>> vis)
{
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1)
    { // base case
        cout << sol << "\n";
        return;
    }

    // up
    if (x - 1 >= 0 && !vis[x - 1][y] && maze[x - 1][y] == 1)
    {
        // Mark current cell as visited before making the move.
        vis[x][y] = true;
        // Append "U" to the solution string to denote an upward move.
        solveMazeUtil(maze, x - 1, y, sol + "U", N, vis);
        // Backtracking step: Unmark the current cell as visited.
        vis[x][y] = false;
    }

    // DOWN: Move to (x + 1, y)
    if (x + 1 < N && !vis[x + 1][y] && maze[x + 1][y] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x + 1, y, sol + "D", N, vis);
        vis[x][y] = false;
    }

    // RIGHT: Move to (x, y + 1)
    if (y + 1 < N && !vis[x][y + 1] && maze[x][y + 1] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x, y + 1, sol + "R", N, vis);
        vis[x][y] = false;
    }

    // LEFT: Move to (x, y - 1)
    if (y - 1 >= 0 && !vis[x][y - 1] && maze[x][y - 1] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x, y - 1, sol + "L", N, vis);
        vis[x][y] = false;
    }
}

void solveMaze(int maze[][4], int N)
{
    string sol = "";

    vector<vector<bool>> vis(N,  vector<bool>(N, false));

    if (maze[0][0] == 1)
    { // only move when initial position allows
        solveMazeUtil(maze, 0, 0, sol, N, vis);
    }
}

int main()
{
    int n = 4;
    int maze[4][4] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {1, 1, 0, 0},
                      {0, 1, 1, 1}};
    solveMaze(maze, n);
    return 0;
}