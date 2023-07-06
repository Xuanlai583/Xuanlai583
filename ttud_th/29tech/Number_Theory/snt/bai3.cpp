#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void sang2(int a, int b) {
    bool c[b-a+1];
    memset(c, true, sizeof(c));
    for(int i = 2; i <= sqrt(b); i++) {
        for(int j = max((i * i), ((a + i -1)/i )*i); j <= b; j+=i) {
            c[j - a]= false;
        }
    }
        for(int i = max(2, a); i <= b ; i++) {
        if(c[i-a]) cout << i <<" ";
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    bool c[b+1];
    memset(c, true, sizeof(c));
    c[1]=c[0] =false;
    for(int i = 2; i <= sqrt(b);i++) {
        if(c[i]) {
            for(int j = i*i; j <= b; j+=i) {
                c[j] = false;
            }
        }
    }
    // sang2(a, b);
    for(int i = max(2, a); i <= b ; i++) {
        if(c[i]) cout << i <<" ";
    }

}