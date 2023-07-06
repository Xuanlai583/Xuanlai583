#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int dp[MAX];

int n, S;
int main() {
    cin >> n >> S;
    int a[n];
    for(int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    dp[0] = 1;
    for(int c : a) {
        for(int i =1 ; i <= S; i++) {
            if(i >=c) {
                dp[i] += dp[i -c];
            }
        }
    }
    cout << dp[S];
}