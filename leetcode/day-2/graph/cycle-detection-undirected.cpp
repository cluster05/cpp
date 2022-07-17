#include <bits/stdc++.h>
using namespace std;

bool cycleUtil(vector<int> adjlist[], vector<int> visited, int curr) {

  if (visited[curr] == 2)
    return true;

  visited[curr] = 1;
  bool FLAG = false;
  for (int i = 0; i < adjlist[curr].size(); i++) {
    if (visited[adjlist[curr][i]] == 1) {
      visited[adjlist[curr][i]] = 2;
    } else {
      FLAG = cycleUtil(adjlist, visited, adjlist[curr][i]);
      if (FLAG)
        return true;
    }
  }
  return false;
}

bool isCycle(int v, vector<int> adjlist[]) {
  vector<int> visited;

  bool FLAG = false;

  for (int i = 0; i < v; i++) {
    visited[i] = 1;
    for (int j = 0; j < adjlist[i].size(); j++) {
      FLAG = cycleUtil(adjlist, visited, adjlist[i][j]);
      if (FLAG)
        return true;
    }
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
    adjlist[v].push_back(u);
  }
  cout << isCycle(v, adjlist);
}
