#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n=8, a[MAX], hang[MAX], d1[MAX], d2[MAX], ans;
int X[MAX][MAX];
void Try(int i) {
    for(int j= 1; j <= n; j++) {
        if(hang[j] && d1[i - j + n] && d2[i + j - 1] ){
            a[i] = j;
            hang[j] = d1[i - j + n] = d2[i + j - 1]= 0;
            if(i == n) {
                int sum = 0;
                for(int i = 1; i <= n; i++) {
                    sum +=X[i][a[i]];
                }
                ans = max(sum , ans);
            }else Try(i + 1);
            hang[j] = d1[i - j + n] = d2[i + j - 1]= 1;
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        ans = 0;
        for(int i = 1; i <= 100; i++) {
            hang[i] = d1[i] = d2[i]=true;
        }
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        cin >> X[i][j];
    }
}

        Try(1);
        cout << ans << endl;
    }
}