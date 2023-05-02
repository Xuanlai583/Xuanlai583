#include <bits/stdc++.h>

using namespace std;
const int MAX = 30;
int a[MAX];
int n,cnt, ok;
void ktao() {
    cnt=1;
    a[1]=n;
}
void sinh(){
    int i =cnt;
while(i >= 1 && a[i]== 1 ){
    --i;
}
if(i==0){
    ok=0;
}else {
    a[i]--;
    int d = cnt - i +1;
    cnt =i;
    int r = d / a[i];
    int f = d % a[i];
    if(r) {
        for(int j =1 ; j <=r ; j++) {
            ++cnt;
            a[cnt]=a[i];
        }
    }
    if(f) {
        ++cnt;
        a[cnt]=f;
    }
}


}
int main() {
    cin >> n;
    ktao();
    ok=1;
    while(ok) {
        for(int i = 1; i <= cnt; ++i) {
            cout<< a[i]<< " ";
        }
        cout << endl;
        sinh();
    }
}