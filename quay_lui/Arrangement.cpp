#include <bits/stdc++.h>

using namespace std;

const int MAX=100;
int N, a[MAX],b[MAX];

void Print() {
    for(int i = 1; i <= N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i) { 
for(int j = 1; j <= N; j++) {
        if(b[j]==0){
            b[j]=1;
            a[i]=j;
        if(i == N) {
            Print();
        }else{
            Try(i+1);
        }
             b[j]=0;
        }
    }
}
int main() {
    cin>> N ;
    memset(b, 0, sizeof(b));
    Try(1);
    return 0;
}