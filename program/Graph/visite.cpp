#include <bits/stdc++.h>
using namespace std;
int total = 0;
set<vector<int>> ans;

void visit(vector<vector<int>> &island, int i, int j) {
  int m = island.size();
  int n = island[0].size();

  if (i < 0 || j < 0 || i >= m || j >= n || island[i][j] == 0)
    return;

  island[i][j] = 0;
  visit(island, i + 1, j);
  visit(island, i, j + 1);
  visit(island, i - 1, j);
  visit(island, i, j - 1);
}

int main() {
  vector<vector<int>> island = {{1, 1, 1, 0, 0},
                                {0, 1, 1, 1, 1},
                                {0, 1, 0, 0, 0},
                                {1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1}};

  int ans = 0;

  int m = island.size();
  int n = island[0].size();
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (island[i][j] == 1) {
        ans++;
        visit(island, i, j);
      }
    }
  }
  cout << ans;
}
