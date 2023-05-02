#include <bits/stdc++.h>

using namespace std;

const int MAX=100;
int n , k ,a[MAX];
void inkq() {
    for(int i = 1; i <= k;i ++) {
        cout << a[i]<<" ";
    }
    cout << endl;
}
void Try(int i) {
    for(int j = a[i-1]+1; j <= n-k+i; j++) {
        a[i]=j;
         if(i==k) {
        inkq();
         }
        else
            Try (i+1);
    }

}
 
 int main() {
    cin>> n;
    cin>> k;
    a[0]=0;
    Try(1);
    return 0;
 }