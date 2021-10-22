#include <bits/stdc++.h>
using namespace std;

#define V 5

class AdjacencyMatric {
  int graph[V][V] = {0};

public:
  AdjacencyMatric() {}
  void addEdge(int u, int v) { graph[u][v] = 1; }

  void print() {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++)
        cout << graph[i][j] << " ";
      cout << endl;
    }
  }
};

int main() {
  AdjacencyMatric met = AdjacencyMatric();
  met.addEdge(2, 3);
  met.addEdge(4, 1);
  met.addEdge(5, 5);
  met.addEdge(2, 1);

  met.print();
}