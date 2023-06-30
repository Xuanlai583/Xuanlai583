#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int n, a[MAX], X[100], ans = 0;

void inp() {
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2) {
        cout << "NO\n";
        return;
    }
    bool mark[sum / 2 + 1];
    memset(mark, false, sizeof(mark));
    for(int i = 0; i < n; i++) {
        for (int j = sum / 2 ; j >= a[i]; j--) {
            if(mark[j - a[i]] == 1 || j == a[i]) {
                mark[j] = true;
            }
        }
    }

    if(mark[sum / 2]) cout << "YES\n";
    else cout << "NO\n";
}


int main() {
    int t; cin >> t;
    while(t--) {
        inp();
    }
}