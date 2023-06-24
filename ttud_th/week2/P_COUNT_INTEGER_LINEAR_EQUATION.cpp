#include<bits/stdc++.h>

using namespace std;
#define MAX 20
int n,f, M, cnt=0;
int a[MAX], x[MAX], t[MAX];



void enter() {
    cin >> n;
    cin >> M;
    for(int i = 1; i <= n;i++) {
        cin >>a[i]; 
    }

    t[1]=a[1];
    for(int i = 2; i<= n; i++) {
        t[i]=a[i]+t[i-1];
    }
}

void solution() {
    if(f == M )
    cnt++;
}

void Try(int k) {
    for(int i = 1; i <= (M-f-(t[n]-t[k]))/a[k]; i++) {
        x[k]=i;
        f+=a[k]*x[k];
        if( k== n) {
            solution();
        }else Try(k+1);
        f -= a[k]*x[k];
    }
}
int main() {
    enter();
    Try(1);
    cout << cnt;
}



