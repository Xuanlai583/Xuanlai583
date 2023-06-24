#include<bits/stdc++.h>

using namespace std;

const int MAX=30;
int N;
int a[MAX];
void in() {
    for(int i = 1; i <= N;i++) {
                cout<< a[i];
            }
            cout<<endl;
}
void Try(int i) {
    for(int j = 0; j < 2;j++) {
        a[i]=j;
        if(i==N) {
            in();
        }else {
            Try(i+1);
        }
    }
}
int main() {
    cin>> N;
    Try(1);
}