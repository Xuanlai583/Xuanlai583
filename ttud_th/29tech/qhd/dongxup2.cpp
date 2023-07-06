#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

int dp[MAX];

const int MOD =  1e9+ 7;
int main() {
    int n, S;
    cin >> n >> S;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    memset(dp, 0 , sizeof(dp));
    dp[0] = 1;
    for(int j = 1; j <= S; j++) {
        for(int c : a) {
            if(j >= c) {
                dp[j] = (dp[j] + dp[j - c])% MOD;
            }
        }
    }
    cout << dp[S];

}