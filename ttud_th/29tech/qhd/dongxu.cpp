#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int dp[MAX];

int main() {
    int n, S;
    cin >> n >> S;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = 0;
    for(int j = 1; j <= S; j++) {
        dp[j]=1e9 + 7;
        for(int c : a) {
            if(j >= c) {
                dp[j] = min(dp[j] , dp[j - c] + 1);
            }
        }
    }
    
    if(dp[S] == 1e9) {
        cout << "-1" << endl;
    }else cout << dp[S] << endl;
}