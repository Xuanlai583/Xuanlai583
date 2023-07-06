#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

//chi ap dụng cho đồ thị có hướng

int n, m;
vector<int> ke[100];
bool visited[MAX];
int indegree[MAX];
vector<int> topo;

void inp() {
    cin >> n>> m;
    for(int i =1; i <= m; i++) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        indegree[y]++;
    }
    memset(visited, false, sizeof(visited));
}


void dfs(int u) {
    visited[u]= true;
    for(int v : ke[u]) {
        if(!visited[v]) dfs(v);
    }
    topo.push_back(u);
}

void kahn() {
    queue<int> q;
    for(int i = 1; i<= n; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v : ke[u]) {
            indegree[v]--;
            if(indegree[v]==0) q.push(v);
        }
    }
}

int main() {
    inp();
    // for(int i = 1; i <= n; i++) {
    //     if(!visited[i]) {
    //         dfs(i);
    //     } 
    // }
    // reverse(begin(topo), end(topo));
    // for(int x : topo) {
    //     cout << x << " ";
    // }
    kahn();
}

