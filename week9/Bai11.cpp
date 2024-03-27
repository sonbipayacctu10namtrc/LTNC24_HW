#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0, ln = 0;
    vector<int> v;
    while(n){
        v.push_back(n & 1);
        n /= 2;
    }
    auto it = v.begin();
    while(it != v.end()){
        if (!(*it)){
            ln = max(ln, cnt);
            cnt = 0;
        }
        else ++cnt;
        ++it;
    }
    cout << max(ln, cnt);
    return 0;
}
