#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

int n, temp, res;
int a[MAX];
int b[MAX];
int chan[MAX];
int le[MAX];

void intput() {
    cin >> n;
    for(int i =1; i <= n; i++) {
        cin >> a[i];
    }
}

// int slove(){
//     b[1]= a[1];res = 0;
//     for(int i = 2; i <= n; i++) {
//         b[i]=max(b[i-1]+a[i], a[i]);
//         if(b[i] % 2 == 0 && b[i] > 0)
//         if(res < b[i])res = b[i];
//     }
//     return res;
// }

int slove2() {
    if(a[1]%2==0) chan[1]==a[1];
    else le[1]=a[1];
    for(int i = 2; i <= n; i++) {
        if(a[i] % 2 == 0) {
            chan[i]=max(a[i], a[i]+ chan[i-1]);
            le[i]=max(a[i], a[i]+le[i-1]);
        }else{
            le[i]=max(a[i], a[i]+ chan[i-1]);
            chan[i]=max(a[i], a[i]+le[i-1]);
        }
        if(res < chan[i])res = chan[i];                    
    }
    return res;
}

int main() {
    intput();
    cout << slove2();
    return 0;
}