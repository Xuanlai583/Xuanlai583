#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;
int n, a[MAX];
int bMark[MAX];


void in() {
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int k ) {
    for(int i = 1; i <=n; i++) {
        if(!bMark[i]){
            a[k]= i;
            bMark[i]=true;
            if( k == n) {
                in();
            }else Try(k+1);
            bMark[i]=false;
        }
    }
}
int main() {
    memset(bMark, 0, sizeof(bMark));
    cin >> n; 
    Try(1);
}