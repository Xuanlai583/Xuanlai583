#include<bits/stdc++.h>
using namespace std;
#define MAX 10000


int n, a[MAX], s , X[MAX], ans = 0;


void inp() {
    cin >> n>> s;
    for(int i =1 ; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void Try(int i, int sum , int pos) {
    if(sum == s) {
        cout << "[";
        for(int j = 1; j < i; j++) {
            cout << X[j];
            if(j == i-1) cout <<"]";
            else cout << " ";
        }
        cout << endl;
        ans = 1;
        return;
    }
    for(int j = pos; j <= n ;j++) {
        if(sum + a[j] <= s) {
            X[i] = a[j];
            Try(i + 1, sum + a[j], j + 1);
        }
    }
}

int main() {
    int t; cin >> t;
    while( t--) {
        inp();
        Try(1, 0, 1);
    }
}