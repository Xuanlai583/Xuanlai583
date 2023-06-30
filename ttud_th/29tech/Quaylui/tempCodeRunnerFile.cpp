#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int n, a[MAX];
int k, s, sum;



void in() {
    for(int i = 1; i <= k; i++) {
         cout << a[i] << " ";
    }
    cout <<endl;
}

void Try( int i) {
    for(int j = a[i-1] + 1; j < n - k +1 ; j++) {
        a[i]=j;
        sum += j;
        if(j == k && sum == s ) {
            in();
        }else Try(i + 1);
        sum -= j;
    }
}
int main() {
    cin >> n>> k >> s;
    Try(1);
    return 0;
}