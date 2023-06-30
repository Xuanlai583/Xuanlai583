#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n, a[MAX];
int k, s, cnt;
int sum;

void Try( int i) {
    for(int j = a[i-1] + 1; j <= n - k +i ; j++) {
        a[i]=j;
        if(i == k) {
            sum = 0;
            for(int t = 1; t <= k; t++) {
                sum += a[t];
            }
            if(sum == s) cnt++;
        }else Try(i + 1);
    }
}
int main() {
    cin >> n>> k >> s;
    sum= 0;
    cnt=0;
    Try(1);
    cout << cnt;
    return 0;
}