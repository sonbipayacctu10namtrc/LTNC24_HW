#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int n, int left, int right, int x){
    if (left > right) return -1;
    int m = (left + right) / 2;
    if (a[m] > x) return BinarySearch(a, n, left, m - 1, x);
    else if (a[m] < x) return BinarySearch(a, n, m + 1, right, x);
    return m;
    
}

int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cout << BinarySearch(a, n, 0, n - 1, x);
}