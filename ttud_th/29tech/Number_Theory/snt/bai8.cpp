#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*
check số thuần nguyên tố 
*/
bool a[10000];

bool check(int n) {

    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit;
        if(!a[digit]) {
            return false;
        }else
        n /=10;
    }
    if(a[sum]) return true;
    else return false;
}
int main() {
    memset(a, true, sizeof(a));
    a[0]=a[1]=false;
    for(int i = 2; i <= sqrt(10000); i++) {
        if(a[i])
        for(int j = i * i; j <= 10000;j+=i) {
            a[j]= false;
        }
    }
    int t;cin >> t;
    while(t--) {
        int cnt=0;
        int b, c;cin >> b >> c;
        for(int i = b; i <= c;i++) {
            if(check(i)==true && a[i])cnt++;
        }
        
        cout << cnt<<endl;   
    }
}