#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int n, m, s;
vector<int> ke[MAX];
bool visited[MAX];

void inp() {
    cin >> n >> m >> s;
    for(int i = 0; i <= n; i++) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int x : ke[v]) {
            q.push(x);
            visited[x]= true;
        }
    }
}

int main() {
    inp();
    bfs(s);
}