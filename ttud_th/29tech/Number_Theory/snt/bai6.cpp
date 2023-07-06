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
int main() {
    int n;
    cin >> n;
    int cnt= 0;
    int i = 2;
    while(cnt < n) {
        if(slove(i)) {
            cout << i << " ";
            cnt ++;
        }
        i++;
    }

    
}