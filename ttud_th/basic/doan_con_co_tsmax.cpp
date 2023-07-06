#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

#define htn ios_base::sync_with_stdio(false);cin.tie(0); 

int n;
int a[MAX];
int ans[MAX];

int Maxleftmid(int i, int j) {
    int maxLM = a[j];
    int s = 0;
    for( int k = j; k >= i; k--) {
        s += a[k];
        maxLM = max(maxLM , s);
    }
    return maxLM;
}

int Maxrightmid(int i, int j) {
    int maxRM = a[i];
    int s = 0;
    for(int k = i; k <= j; k++) {
        s += a[k];
         maxRM = max(maxRM, s);
    }
    return maxRM;
}

int qhd(int i, int j ) {
    if(i == j) {
        return a[i];
    }
    int mid = (i + j) / 2;
    int wl = qhd(i , mid);
    int wr = qhd(mid + 1, j);
    int maxl = Maxleftmid(i,mid );
    int maxr = Maxrightmid(mid + 1, j);
    int wM = maxl + maxr;
    return max(max(wl, wr), wM);

}
int main() {
    cin >> n;
    for(int i = 0; i< n ;i++) {
        cin >> a[i];
    }
    cout << qhd(1, n);

}
//−2, 1, −3, 4, −1, 2, 1, −5, 4