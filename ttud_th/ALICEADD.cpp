#include <bits/stdc++.h>

using namespace std;

string Add(string a, string b) {
    string kq = "";
    int nho = 0;
    while(a.size() < b.size())
        a ="0" + a;
    while(b.size() < a.size())
        b = "0" +b;
    int len = a.size() - 1;
    for(int i = len; i >= 0; i--) {
        int z = int(a[i] - '0') + int(b[i] - '0' ) + nho;
        kq = char(z % 10 + '0') + kq ;
        nho= z / 10;
    }
    if (nho > 0)
        kq = char(nho + '0') + kq ;
        return kq;   
}
    int main() {
        string a, b;
        cin >> a >> b;
        cout << Add(a, b) <<endl;
        return 0;
    }     
