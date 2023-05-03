#include <bits/stdc++.h>

using namespace std;
const int MAX =100;
int n, a[MAX], cot[MAX] , d1[MAX] , d2[MAX];
void Print() {
    for(int i = 1; i<= n; i++) {
        cout<< "vi tri hang "<< i <<"cot" << a[i]<<endl;
    }
    cout<<endl;
}
void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(cot[j] ==1 && d1[i-j+n] ==1 && d2[j+i-1] ==1){
            cot[j] = d1[i-j+n] = d2[j+i-1] =0;
            a[i]=j;
            if(i == n) {
                Print();
            }else{
                Try(i+1);
            }
             cot[j] = d1[i-j+n] = d2[j+i-1] =1;
        }
    }
}
int main() {
    cin>> n;
    for(int i = 1; i <= MAX; i++) {
        cot[i] = d1[i] =d2[i] =1;
    }
    Try(1);
    return 0;
}