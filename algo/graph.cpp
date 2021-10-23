#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool vis[100] = {0};
vi ajlist[100];

/*
void dfs(int node) {

  // preorder
  vis[node] = 1;
  cout << node << " -> ";

  // inorder
  for (int ele : ajlist[node]) {
    if (vis[ele])
      ;
    else {
      dfs(ele);
    }
  }
  // postorder
  // cout<< node << " -> ";
}

void bfs(int s) {
  queue<int> q;
  q.push(1);
  vis[1] = 1;

  rep(i, 1, edges + 1) {
    cout << i << " : ";
    for (int j : ajlist[i])
      cout << j << " -> ";
    cout << "NULL";
    cout << endl;
  }

  // BFS
  while (!q.empty()) {
    cout << endl;
    for (int i = 1; i < edges; i++) {
      cout << vis[i];
    }
    cout << endl;
    int node = q.front();
    q.pop();
    cout << node << " -> ";
    for (int ele : ajlist[node]) {
      if (!vis[ele]) {
        vis[ele] = 1;
        q.push(ele);
      }
    }
  }
}
 */

void tropologicalOrder() {

  int nodes, edges;
  cin >> nodes >> edges;

  vector<vector<int>> ajedges;
  vector<int> indegree;
  int count = 0;

  rep(i, 0, edges) {
    int u, v;
    cin >> u >> v;
    ajedges[u].push_back(v);
    indegree[v]++;
  }

  queue<int> pq;
  for (auto ele : indegree)
    if (ele == 0)
      pq.push(ele);

  while (!pq.empty()) {
    count++;
    int x = pq.front();
    pq.pop();
    cout << x << " ";
    for (auto ele : ajedges[x]) {
      indegree[ele]--;
      if (indegree[ele] == 0) {
        pq.push(ele);
      }
    }
  }
}

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  tropologicalOrder();
}

/*
    TRPOLOGICAL ORDER
    queue<int> q;
    for(int ele:indegree){
        if(ele == 0){
            q.push(ele);
        }
    }
    while(!q.empty()){
        count++;
        int node = q.front();
        q.pop();
        cout<<node<<" -> ";
        for(int ele:ajlist[node]){
            indegree[ele]--;
            if(indegree[ele] == 0)
                q.push(ele);
        }


    }
 */