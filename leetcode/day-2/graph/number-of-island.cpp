#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void bfs(vector<vector<char>> &grid, int i, int j) {

    int m = grid.size();
    int n = grid[0].size();
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0')
      return;

    if (grid[i][j] == '1')
      grid[i][j] = '0';

    bfs(grid, i + 1, j);
    bfs(grid, i - 1, j);
    bfs(grid, i, j + 1);
    bfs(grid, i, j - 1);
  }

  int numIslands(vector<vector<char>> &grid) {

    int number = 0;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '1') {
          number++;
          bfs(grid, i, j);
        }
      }
    }
    return number;
  }
};

int main() {}
