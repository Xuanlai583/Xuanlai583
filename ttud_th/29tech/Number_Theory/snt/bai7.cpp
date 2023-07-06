#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*
cách khác đi sàng số nguyên tố rồi foreach để check     
*/
bool slove(int n) {
    if(n < 2 ) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++) {
            if(slove(i) == true && slove(n -i)== true){
                cout << i << " "<< n -i << endl;
            }
        }
    }
}