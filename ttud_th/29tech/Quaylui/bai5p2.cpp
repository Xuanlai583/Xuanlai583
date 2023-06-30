#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n; 
int a[MAX][MAX];
string s ="";

void inp() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for( int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j) {
    if(i == n && j == n) {
        cout << s << endl;
    }

    if( i + 1 <= n && a[i + 1][j] ) {
        s += "D";
        a[i][j] = 0;
        Try(i + 1, j);
        s.pop_back();
        a[i][j]= 1;
    }
    if( j +1 <= n && a[i][j + 1] ) {
        s += "R";
        a[i][j] = 0;
        Try(i , j + 1);
        s.pop_back();
        a[i][j] = 1;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        inp();
        Try(1, 1);
        cout << endl;
    }
}