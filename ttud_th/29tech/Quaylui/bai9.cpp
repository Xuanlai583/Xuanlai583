#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n, a[MAX], hang[MAX], d1[MAX], d2[MAX], cnt=0;

void Try(int i) {
    for(int j= 1; j <= n; j++) {
        if(hang[j] && d1[i - j + n] && d2[i + j - 1] ){
            a[i] = j;
            hang[j] = d1[i - j + n] = d2[i + j - 1]= 0;
            if(i == n) {
                cnt++;
            }else Try(i + 1);
            hang[j] = d1[i - j + n] = d2[i + j - 1]= 1;
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        cnt = 0;
        for(int i = 1; i <= 100; i++) {
            hang[i] = d1[i] = d2[i]=true;
        }
        Try(1);
        cout << cnt << endl;
    }
}