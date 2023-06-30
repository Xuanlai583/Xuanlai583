#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int ok = 0;
int n;
int a[MAX][MAX];
string spath = "DLRU";
string s;

int x[4] = {1, 0, 0, -1}; 
int y[4] = {0, -1, 1, 0};

void inp() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        } 
    }
}

void Try(int i, int j) {
    if(i == n && j == n) {
        cout << s << endl;ok = 1;
    }
    for(int k = 0; k < 4; k++) {
        int i1 = i + x[k];
        int j1 = j + y[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1) {
        s += spath[k];
        a[i][j] = 0;
        Try(i1, j1);
        s.pop_back();
        a[i][j] = 1;
        }
          
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
    inp();
    ok = 0;
    s = "";
    if(a[1][1] && a[n][n]){
    a[1][1]= 0;
    Try(1, 1);
    }
        if(!ok) cout << "-1";
    }
    return 0;
}