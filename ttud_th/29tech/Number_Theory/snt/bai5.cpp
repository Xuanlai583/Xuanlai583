#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool slove(int n) {
    if(n < 2 ) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
    
}
bool chu_so(int n) {
    while(n > 0 ) {
        int digit = n % 10;
        if(!slove(digit)) {
            return false;
        }
        n /=10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int count =0;
        for(int i = a; i <= b;i++) {
            if( slove(i) && chu_so(i)) count++;
        }
        cout << count << endl;
       
    }
}