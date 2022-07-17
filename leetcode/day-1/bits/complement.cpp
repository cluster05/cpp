#include <bits/stdc++.h>
using namespace std;

bool cycleUtil(vector<int> adjlist[], vector<bool> visited, int curr) {

  if (visited[curr])
    return true;

  visited[curr] = true;
  bool FLAG = false;
  for (int i = 0; i < adjlist[curr].size(); i++) {
    FLAG = cycleUtil(adjlist, visited, adjlist[curr][j]);
    if (FLAG)
      return true;
  }
  return false;
}

bool isCycle(int v, vector<int> adjlist[]) {

  vector<bool> visited(v, false);
  bool FLAG = false;

  for (int i = 0; i < v; i++) {
    visited[i] = true;
    for (int j = 0; j < adjlist[i].size(); i++) {
      FLAG = cycleUtil(adjlist, visited, adjlist[i][j]);
      if (FLAG) {
        return true;
      }
    }
    visited[i] = false;
  }
  return false;
}

int main() {

  int v, e;
  cin >> v >> e;
  vector<int> adjlist[v];
  for (int j = 0; j < e; j++) {
    int u, v;
    cin >> u >> v;
    adjlist[u].push_back(v);
  }
  cout << isCycle(v, adjlist);
}
