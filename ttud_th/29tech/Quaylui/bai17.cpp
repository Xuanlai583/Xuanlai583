#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

int n, a[MAX], res = 0,price_min = 1e9 +5;
int c[100][100], cmin = 1e9 +5;
bool visited[MAX];
void inp() {
    memset(visited, false, sizeof(visited));
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n;j++) {
            cin >> c[i][j];
            if(c[i][j])
            cmin = min(cmin, c[i][j]);
        }
    }
}

void Try(int i) {
    for( int j = 2; j <= n; j++) {
        if(!visited[j]) {
            visited[j]= true;
            a[i] = j;
            res += c[a[i]][a[i-1]];
            if(i == n) {
                price_min = min(price_min, res + c[a[n]][1]);
            }
            else if(res + cmin * (n - i + 1) < price_min){
                Try(i + 1);
            }
            visited[j] = false;
            res -=  c[a[i]][a[i-1]];
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        inp();
        a[1] = 1;
        Try(2);
    }
    cout << price_min;
}
