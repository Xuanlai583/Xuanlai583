#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void slove(int n) {
    bool check= true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) check = false;break;
    }
    if(check)cout << "YES"<<endl;
    else cout << "NO"<< endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        slove(n);
    }
}