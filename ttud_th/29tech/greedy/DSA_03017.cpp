#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while(t--) {
        int k; cin >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(char x : s) mp[x]++;
        priority_queue<int> Q;
        for(auto it : mp) {
            Q.push(it .second);
        }

        while(k--) {
            int tmp = Q.top();
            --tmp;
            Q.push(max(tmp, 0));
        }
        int ans= 0;
        while(!Q.empty()) {
            ans += Q.top()  * Q.top();
            Q.pop();
        }

        cout << ans;
    }
}