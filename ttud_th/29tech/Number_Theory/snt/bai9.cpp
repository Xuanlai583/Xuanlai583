#include <iostream>

using namespace std;

// Hàm tính GCD của hai số
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Hàm tìm và in các cặp số nguyên tố cùng nhau trong khoảng a đến b
void findCoPrimePairs(int a, int b) {
    for (int i = a; i <= b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (gcd(i, j) == 1 && isPrime(i) && isPrime(j)) {
                cout << "(" << i << ", " << j << ")" << endl;
            }
        }
    }
}

int main() {
    int a, b;

    cin >> a;

    cin >> b;
    cout << a << " đến " << b << " là:" << endl;
    findCoPrimePairs(a, b);
    return 0;
}
