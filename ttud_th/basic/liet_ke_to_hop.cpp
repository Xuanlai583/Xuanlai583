#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n, m, a[MAX];

void in() {
    for(int i = 1; i <= m; i++) {
        cout<< a[i]<< " ";
    }
    cout << endl;
}


void Try(int k) {
    for(int i = a[k-1] + 1; i <= n-m+k; i++) {
        a[k]=i;
        if(k==m) in();
        else Try(k+1);
    }
}
int main() {
    cin >> n >> m;
    Try(1);
}