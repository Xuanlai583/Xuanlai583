#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const string InputFile = "BSTR.INP";
const string OutputFile = "BSTR.OUT";
const int maxn = 30;

int x[maxn];
int n;

void generate(ofstream &f) {
    // Fill x with zeros
    memset(x, 0, sizeof(x));

    do {
        // Print current configuration
        for (int i = 1; i <= n; i++) {
            f << x[i];
        }
        f << endl;

        // Find the rightmost zero
        int i = n;
        while (i > 0 && x[i] == 1) {
            i--;
        }

        // If not all ones, increment the rightmost zero and reset all following bits to zero
        if (i > 0) {
            x[i] = 1;
            memset(x + i + 1, 0, (n - i) * sizeof(x[0]));
        }
    } while (i > 0);
}

int main() {
    // Read input from file
    ifstream infile(InputFile);
    infile >> n;
    infile.close();

    // Generate binary strings
    ofstream outfile(OutputFile);
    generate(outfile);
    outfile.close();

    return 0;
}
