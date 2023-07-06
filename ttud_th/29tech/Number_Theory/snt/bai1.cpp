#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;cin >> n;
    bool check= true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) check = false;break;
    }
    if(check)cout << "YES";
    else cout << "NO";
    return 0;
}