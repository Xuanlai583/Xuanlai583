#include<bits/stdc++.h>
using namespace std;
#define MAX 10

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    priority_queue<int , vector<int>, greater<int>> Q;
    int n;
    cin >>n;
    for(int i = 1; i <= n; i++) {
        int j;
        cin >> j;
        Q.push(j);
    }
    int ans = 0;
    while(Q.size() > 1) {
        int x = Q.top();
        Q.pop();
        int y = Q.top();
        Q.pop();
        ans += y + x;
        Q.push(x + y); 
    }
    cout << ans;
}