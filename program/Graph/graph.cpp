#include <bits/stdc++.h>
using namespace std;

void BFS(int graph[][7], int start) {
  queue<int> q;
  int visited[7] = {0};
  visited[start] = 1;
  q.push(start);
  while (!q.empty()) {
    int f = q.front();
    cout << f << " ";
    q.pop();
    for (int j = 0; j < 7; j++) {
      if (visited[j] == 0 && graph[f][j] == 1) {
        q.push(j);
        visited[j] = 1;
      }
    }
  }
  cout << endl;
}

void DFS(int graph[][7], int vertex) {

  static int visited[7] = {0};
  if (visited[vertex] == 0) {
    cout << vertex << " ";
    visited[vertex] = 1;
    for (int j = 0; j < 7; j++) {
      if (graph[vertex][j] == 1 && visited[j] == 0) {
        DFS(graph, j);
      }
    }
  }
}

int main() {

  int graph[7][7] = {

      {0, 1, 0, 1, 1, 0, 0}, {1, 0, 1, 0, 1, 0, 0}, {0, 2, 0, 0, 1, 1, 0},
      {1, 0, 0, 0, 1, 0, 1}, {1, 1, 1, 1, 0, 1, 1}, {0, 0, 1, 0, 1, 0, 1},
      {0, 0, 0, 1, 1, 1, 0},
  };
  BFS(graph, 4);
  DFS(graph, 4);
}