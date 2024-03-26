// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int solve(vector<vector<char>> v, int posX, int posY){
//     //Survived
//     if (posX == v.size() - 1) return 1;
    
//     int z1 = 0, z2 = 0, z3 = 0;
    
//     //Dead
//     if (v[posX + 1][posY] == 'R' && v[posX + 1][posY + 1] == 'R' && v[posX + 1][posY - 1] == 'R') return 0;
    
//     //move right
//     if(v[posX + 1][posY + 1] == 'E') z1 = solve(v, posX + 1, posY + 1);
    
//     // move left
//     if (v[posX + 1][posY - 1] == 'E') z2 = solve(v, posX + 1, posY - 1);
    
//     //move straight flush
//     if (v[posX + 1][posY] == 'E') z3 = solve(v, posX + 1, posY);
    
//     return z1 || z2 || z3;
// }


// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<char>> v;
//     for (int i = 0; i < n; ++i){
//         vector<char> tmp;
//         tmp.push_back('R');
//         for (int j = 0; j < m; ++j){
//             char c;
//             cin >> c;
//             tmp.push_back(c);
//         }
//         tmp.push_back('R');
//         v.push_back(tmp);
//     }
//     auto d = find(v[0].begin(), v[0].end(), 'Y');
//     int z = d - v[0].begin();
// //    cout << z;
//     if (solve(v, 0, z)) cout << "YES";
//     else cout << "NO";
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;


int W, H, x, y;
const int oo = 1e6 + 15;

namespace Sub1 {
    int A[1010][1010];
    int dp[1010][1010];
    void input() {
        for (int i = 1; i <= H; ++i) {
            for (int j = 1; j <= W; ++j) {
                char c;
                cin >> c;
                if (c == 'R') A[i][j] = 1;
                else if (c == 'E') A[i][j] = 0;
                else {
                    x = i;
                    y = j;
                    A[i][j] = 0;
                }
            }
        }
    }

    int solve(int i, int j) {
        if (A[i][j] == 1) return -oo;
        if (i == H + 1) {
            if (A[i][j] == 0) return 1;
            return 0;
        }
        if (dp[i][j] != -1) return dp[i][j];
        int cur = -oo;

        cur = max(cur, solve(i + 1, j));
        if (j + 1 <= W && A[i][j + 1] == 0)
            cur = max(cur, solve(i + 1, j + 1));
        if (j - 1 >= 1 && A[i][j - 1] == 0)
            cur = max(cur, solve(i + 1, j - 1));

        return dp[i][j] = cur;
    }
    void Process() {
        input();
        memset(dp, -1, sizeof(dp));
        if (solve(1, y) == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("FallingRock.inp", "r", stdin);
    freopen("FallingRock.out", "w", stdout);

    cin >> W >> H;
    if (W <= 1000 && H <= 1000) Sub1::Process();

    return 0;
}
