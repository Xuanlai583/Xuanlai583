#include <bits/stdc++.h>

using namespace std;
const int MAX = 30;
int N, a[MAX];
void inkq(int n) {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout<< endl;
} 
void Try(int i, int k, int cursum) {
    for(int j = k; j >=1; j--) {
        if(cursum + j <= N) {
            a[i]=j;
            cursum+=j;
            if(cursum == N) {
                inkq(i);
            }else {
                Try(i+1,j,cursum);
            }
            cursum-=j;
        }
    }
}
int main() {
    cin >> N;
    Try(1, N,0);

}