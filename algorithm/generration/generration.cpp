#include <bits/stdc++.h>

using namespace std;

const string IputFile= "TextIput.txt";
const string OutputFile = "Textoutput.txt";
const int MAX = 30;

int n,i ;

int a[MAX];

void generate(ofstream &f) {
    memset(a, 0, sizeof(a));
    do {
        for(int i = 1 ; i <= n ; i++) {
            f << a[i];
        }
    f << endl;
    i =n;
    while(i > 0 && a[i]==1) {
        i--;
    }
    if(i > 0 ) {
        a[i]=1;
        memset(a + i +1, 0,sizeof(a[0])* (n-i) );
    }
    }while(i > 0);

}
int main() {
    ifstream infile(IputFile);
    infile >> n;
    infile.close();

    ofstream outfile(OutputFile);
    generate(outfile);
    outfile.close();

    return 0;
}
