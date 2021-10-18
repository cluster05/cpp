#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool vis[100] ={0};
vi ajlist[100];

void dfs(int node){

    // preorder
    vis[node] = 1;
    cout<< node << " -> ";

    // inorder
    for(int ele:ajlist[node]){
        if(vis[ele]);
        else{
            dfs(ele);
        }
    }
    // postorder
    // cout<< node << " -> ";
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif


    int nodes, edges;
    cin >> nodes >> edges;

    

    rep(i, 0, edges){
        int x, y;
        cin >> x >> y;
        ajlist[x].push_back(y);
        ajlist[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    vis[1] = 1;

    rep(i, 1, edges+1){
        cout << i << " : ";
        for (int j : ajlist[i])
        cout << j << " -> ";
        cout<<"NULL";
        cout << endl;
    }
    
    // BFS
    while(!q.empty()){
        cout<<endl;
        for(int i = 1 ;i < edges ; i++){
            cout<<vis[i];
        }
        cout<<endl;
        int node = q.front();
        q.pop();
        cout<< node << " -> ";
        for(int ele:ajlist[node]){
            if(!vis[ele]){
                vis[ele] = 1 ;
                q.push(ele);
            }

        }

    }
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