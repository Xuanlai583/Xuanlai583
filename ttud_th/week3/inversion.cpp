#include <bits/stdc++.h>
#define MAX 100005
using namespace std;

int const MOD = 1e9+7;

int n;
int a[MAX],temp[MAX];

int inversion(int left, int mid , int right) {
    int i = left, j = mid +1, k = right, inv_count = 0;
    while((i <= mid) && (j < right)) {
        if(a[i] <= a[j]) temp[k++]= a[i++];
        else{
            temp[k++]=a[j++];
            inv_count= inv_count + (mid - i);
        }
    }
    while(i <= mid ) temp[k++] = a[i++];
    while(j <= right) temp[k++] = a[j++];
    for(i = left; i <= right; i++) {
        a[i]=temp[i];
    }
    return inv_count;
}

int merge_sort(int left, int right) {
    int mid, inv_count = 0;
    if(right > left) {
        mid = (right + left)/2;
        inv_count = inv_count + merge_sort(left, mid) % MOD;
        inv_count= inv_count + merge_sort(mid + 1, right)% MOD;
        inv_count = inv_count + inversion(left, mid , right)% MOD;
    }
    return inv_count;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i =1; i <= n; i++) {
        cin >> a[i];
    }
    cout << merge_sort(1 , n);
    return 0;
} 