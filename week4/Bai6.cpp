#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if (!b) return a;
    return gcd(b, a % b);
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i){
        cin >> b[i];
    }
    int ucln = b[0];
    for (int i = 1; i < m; ++i)
        ucln = gcd(ucln, b[i]);
    int bcnn = a[0];
    for (int i = 1; i < n; ++i){
        bcnn = bcnn / gcd(bcnn, a[i]) * a[i];
    }
    int cnt = 0;
    for (int i = bcnn; i <= ucln; i += bcnn){
        if (!(ucln % i)) ++cnt;
    }
    cout << cnt;
}