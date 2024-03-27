#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int res = 0;
        for (int i = 1; i < n; ++i){
            for (int j = i + 1; j <= n; ++j){
                int d = i & j;
                if (d < k && d > res) res = d;
            }
        }
        cout << res << endl;
    }
}