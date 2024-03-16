#include<bits/stdc++.h>

using namespace std;

int c[101];

int main(){
    memset(c, 0, 101);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        ++c[a[i]];
    }
    int max = 0;
    for (int i = 0; i < n; ++i){
        if (c[a[i]] > max) max = c[a[i]];
    }
    cout << n - max;
    return 0;
}

