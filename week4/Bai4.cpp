#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        for (int j = 0; j < x; ++j){
            int num;
            cin >> num;
            v[i].push_back(num);
        }
    }
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << v[a][b] << endl;
    }
    return 0;
}