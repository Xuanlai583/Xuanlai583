#include <bits/stdc++.h>

using namespace std;

const string file1= "input.txt";
const string file2 = "output.txt";
const int MAX = 30;

int a[MAX];
int n, i;
int main() {
    ifstream fin(file1);
    fin >> n;
    fin.close();

    ofstream fout(file2);
    for(int i = 1; i <= n ; i++) {
        a[i]=i;
    }
    if(n ==0 ){
        fout << endl;
    }else{
        do {
        //in cau hinh hien tai 
        for(int i = 1 ; i <=n; i++) {
            fout << a[i] << " ";
        }
        fout << endl;
        i = n-1;
        while(i >=1  && a[i] > a[i+1] ){
            --i;
        }
        if(i >= 1) {
            int j = n ;
            while(a[j] < a[i]) {
                j--;
            }
            swap(a[i], a[j]);
            int l = i+1; int r = n;
            while(l < r ) {
                swap(a[l] , a[r] );
                l++; r--;
            }
        }
    }while(i > 0);
}    
    fout.close();
    return 0;
}