#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int n, a[MAX];

void Try(int k) {
    for(int i = 1; i <= n; i++) {
        a[k]=i;
        if(k == n) {
            for(int j = 1; j <= n; j++) {
                cout << a[j]<< " ";
            }
            cout << endl;
        }else Try(k + 1);
    }
}
int main() {
    cin >> n;
    Try(1);
    
}