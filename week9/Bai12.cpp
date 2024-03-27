#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[6][6];
    for (int i = 0; i < 6; ++i){
        for (int j = 0; j < 6; ++j)
            cin >> a[i][j];
    }
    int b[6][6];
    int ln = -64;
    for (int i = 1; i <= 4; ++i){
        for (int j = 1; j <= 4; ++j){
            b[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
            ln = max(ln, b[i][j]);
        }
    }
    cout << ln;
}