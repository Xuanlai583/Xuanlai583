#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int n, m, a[MAX];
int f=0, m0;

void in(){
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }cout << endl;
}


void Try(int k ) {
    if (k == n ) {
        a[k] = m0 -f;
        in();
    }
    m0=m-f-(n-k);
    for(int i = 1; i <= m0; i++) {
        a[k]=i;
        f= f +i;
        Try(k+1);
        f = f -i;
    }
}

int main() {
    cin >> m >> n;
    Try(1);
    return 0;
}