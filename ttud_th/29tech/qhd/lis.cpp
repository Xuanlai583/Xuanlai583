#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int n,a[MAX],L[MAX] ;


void slove() {
    for(int i = 2; i <= n; i++) {
        L[i]=1;
        for(int j = 1; j <= i; j++) {
            if(a[i] > a[j])L[i]=max(L[i],L[j]+1 );
        }
    }
}



int main() {
    cin >>n;
    for(int i = 1; i <= n; i++ ) {
        cin >> a[i];
    }
    L[1]=1;
    slove();
    cout << *max_element(L, L+n);       
}