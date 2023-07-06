#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<int> ke[1001];
bool visited[1001];


void inp() {
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u) {
    cout << u;
    visited[u]= true;
    for(int v : ke[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    inp();
    dfs(s);

}