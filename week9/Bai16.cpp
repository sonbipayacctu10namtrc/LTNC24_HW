#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int numberOfSwaps = 0;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ++numberOfSwaps;
            }   
        }
        cnt += numberOfSwaps;
        if (numberOfSwaps == 0) {
            break;
        }
        
    }
    cout << "Array is sorted in " << cnt << " swaps." << endl
         << "First Element: " << a[0] << endl
         << "Last Element: " << a[n - 1];
}

