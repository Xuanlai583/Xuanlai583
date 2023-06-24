#include <bits/stdc++.h>
#define MAX 50
using namespace std;

// input data structures

int n; // so khoa hoc
int m; // so giao vien
vector<int> T[MAX];
bool conflict[MAX][MAX];
int x[MAX];
int load[MAX];
int res;

void input() {
    cin >> m >> n;

    for(int i = 1; i <= m; i++) {
        int k; cin >> k;
        for(int j = 1; j <= k; j++) {
            int c; cin >> c; T[c].push_back(i);
        }
    }

    int K;
    for(int t = 1; t <= n; t++) {
        for(int j = 1; j <= n; j++) {
            conflict[t][j] = false;
        }
    }
    cin >> K;
    for(int k = 1; k <= K; k++) {
        int i, j; cin >> i >> j;
        conflict[i][j] = true;  conflict[j][i] = true;
    }
}

bool check(int t , int k) {
    for(int i =1; i <= k-1; i++) {
        if( conflict[i][k] && x[i] == t) return false;
    }
    return true;
}

void solution() {
    int maxload= 0;
    for(int t = 1; t <= m ; t++) {
        maxload = max(maxload , load[t]);
    }
    if(maxload < res) res = maxload;
}

void Try(int k ) {
    for(int i = 0; i < T[k].size(); i++) {
        int t = T[k][i];
        if(check(t, k)) {
            x[k] = t;
            load[t] += 1;
            if(k == n )solution();
            else{
                if(load[t] < res)
                    Try(k + 1);
            }
            load[t] -= 1;
        }
    }
}
int main() {
    input();
    for(int t =1 ; t <= m ; t++ )
    load[t]=0;
    res=1e9;
    Try(1);
    cout<<res;
    return 0;
}

