#include <bits/stdc++.h>

using namespace std;

const string file1 = "input.txt";
const string file2 = "output.txt";
const int maxN = 30;

int a[maxN];
int n , k;
int i =0;
int main() {
    ifstream fin(file1);
    fin >> n >> k ;
    fin.close();

    ofstream fout(file2);
    for(int i = 1; i <= k ;i++ ) {
        a[i]=i;
    }
    do {
        //In ra cau hinh hien tai
        fout << "{" ;
        for(int i  = 1; i <= k-1; i++ ) {
            fout << a[i] << ", ";
        }
        fout << a[k] << " }\n";
        //sinh tiep 
        i =k;
        while( i > 0 && a[i]==n-k+i) {
            --i;
        }
        if(i > 0){
            a[i]++;
            for(int j = i +1; j <= k ; j++) {
                a[j]=a[j-1] +1;
            }
        } 
    }while(i> 0 );
    fout.close();
}