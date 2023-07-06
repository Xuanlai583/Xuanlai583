#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000007;


int a[MAX];
using ll = long long;
const ll MOD = 1e9 + 7;

//liệt kê , đếm số nguyên tố nhỏ hơn or bằng n
void sang() {
    memset(a, true, sizeof(a));
    a[0]=a[1] =false;
    for(int i = 2; i <= sqrt(MAX); i++) {
        if(a[i]) {
            for( int j = i * i; j <= MAX; j+=i) {
                a[j] = false;
            }
        }
    }
}
//phân tích một số ra thừa số nguyên tố
void pt(int n) {
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0) {
            cout << i <<  " ";
            n = n/i;
        }
    }
    if(n > 1) cout << n<< endl;
}

//tinh boi chung , ucll

ll gcd(ll a, ll b) {
    if( b == 0) return a;
    else return gcd(b, a % b);
}

ll gcm(ll a, ll b) {
    return a/gcd(a, b) * b;
}

void fibo(int n) {
    ll f[n + 1];
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= n; i++) {
        f[n] = f[n - 1] + f[n - 2];
        f[n] % MOD;
    }
}
// tinh a ^b
ll binpow(ll a, ll b) {
    if(b = 0) return 1;
    ll x = binpow( a, b/ 2);
    if(b % 2 == 1) return x * x * a;
    else return x * x;
}

ll binpow2(ll a, ll b) {
    ll res = 1;

    while(b != 0) {
        if(b % 2 == 1) {
            res *= a;
        }
        b /= 2;
        a *= 1;

    }
    return res;
}

int main() {
    // sang();
    // for(int i = 1; i <= 1000; i++) {
    //     if(a[i]) cout << i << " ";
    // }
    // pt(50);
    cout << binpow2(1500,12312);
}