#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(vector<vector<char>> v, int posX, int posY){
    //Survived
    if (posX == v.size() - 1) return 1;
    
    int z1 = 0, z2 = 0, z3 = 0;
    
    //Dead
    if (v[posX + 1][posY] == 'R' && v[posX + 1][posY + 1] == 'R' && v[posX + 1][posY - 1] == 'R') return 0;
    
    //move right
    if(v[posX + 1][posY + 1] == 'E') z1 = solve(v, posX + 1, posY + 1);
    
    // move left
    if (v[posX + 1][posY - 1] == 'E') z2 = solve(v, posX + 1, posY - 1);
    
    //move straight flush
    if (v[posX + 1][posY] == 'E') z3 = solve(v, posX + 1, posY);
    
    return z1 || z2 || z3;
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v;
    for (int i = 0; i < n; ++i){
        vector<char> tmp;
        tmp.push_back('R');
        for (int j = 0; j < m; ++j){
            char c;
            cin >> c;
            tmp.push_back(c);
        }
        tmp.push_back('R');
        v.push_back(tmp);
    }
    auto d = find(v[0].begin(), v[0].end(), 'Y');
    int z = d - v[0].begin();
//    cout << z;
    if (solve(v, 0, z)) cout << "YES";
    else cout << "NO";
    return 0;
}

