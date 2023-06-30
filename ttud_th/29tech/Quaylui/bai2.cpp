#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n;
int a[MAX];

void Try(int i) {
    if(i == 0) return;
    cout << "[";
    for(int j = 1; j <= i; j++) {
        cout << a[j] << " ";
    }
    cout << "]";
    cout << endl;
    for(int j = 1; j <= i;j++)  {
        a[j]+=a[j+1];
    }
    Try(i-1);
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin>> a[i];
    }
    Try(n);
    return 0;
}