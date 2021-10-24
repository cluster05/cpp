#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> adjlist;
  int edge, vertex;
  cin >> vertex >> edge;
  for (int i = 0; i < edge; i++) {
    int u, v;
    cin >> u >> v;
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
  }

  bool cycle = false;

  vector<bool> visited(vertex, false);
}