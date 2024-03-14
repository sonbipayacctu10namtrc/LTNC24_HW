#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = n, cnt = 0;
        while(n){
            int x = n % 10;
            if (x && !(a % x)) ++cnt;
            n /= 10;
        }
        cout << cnt << endl;
    }
}