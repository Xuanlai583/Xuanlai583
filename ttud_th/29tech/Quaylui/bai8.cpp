#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n,m, a[MAX][MAX],cnt;

void inp() {
    cin >> m>> n;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j) {
    if(i == m && j == n) {
        cnt++;
    }
    if(i <= m) {
        Try(i + 1, j);
    }
    if(j <= n) {
        Try(i, j + 1);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        inp();
        Try(1, 1);
        cout << cnt << endl;
        cnt = 0;
    }
}