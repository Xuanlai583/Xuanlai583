#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    bool a[n+1];
    memset(a, true, sizeof(a));
    a[0]=a[1]=false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(a[i]) {
            for(int j = i * i; j <= n; j+=i) {
                a[j] = false;
            }
        }
    }
    
    for(int i = 1; i <= n ;i++) {
        if(a[i])cout << i <<" ";
    }
}